import hid
import serial
import time

# Set up communication with the Arduino
arduino = serial.Serial('/dev/tty.usbmodem1424401', 9600)

# Open the joystick HID device
h = hid.device()
h.open(0x2341, 0x8036)  # Use your VID and PID to open the HID device

# Debounce configuration
debounce_time = 0.2  # 200 ms debounce time
last_button_time = 0  # Tracks the time of the last button press

# Store the last button state
last_button_state = None

# Loop to check for button presses
try:
    while True:
        report = h.read(64)  # Read HID report from joystick
        if report:
            button_state = report[1]  # Assuming button state is in the second byte (adjust index as needed)
            
            # Get the current time
            current_time = time.time()
            
            # Only process if button state has changed and sufficient time has passed (debounce logic)
            if button_state != last_button_state and (current_time - last_button_time) > debounce_time:
                last_button_time = current_time  # Update the last button time

                if button_state == 1:  # Button pressed
                    arduino.write(b'1')  # Send signal to Arduino
                    print("Button pressed, sent '1' to Arduino")
                elif button_state == 0:  # Button released
                    arduino.write(b'0')  # Send signal to Arduino
                    print("Button released, sent '0' to Arduino")
                
                # Update the last button state
                last_button_state = button_state

        time.sleep(0.1)  # Adjust the loop speed if needed
except KeyboardInterrupt:
    h.close()
    arduino.close()
