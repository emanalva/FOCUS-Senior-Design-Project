import can
import cantools
import time
import threading
from evdev import InputDevice, categorize, ecodes

# Replace with your joystick device path
JOYSTICK_DEVICE = '/dev/input/event7'  # Update 'eventX' to your joystick event number
CAN_INTERFACE = 'can0'  # Change to your CAN interface

# Initialize the joystick device
joystick = InputDevice(JOYSTICK_DEVICE)

# Define encoder/sensor data
g1enc = 0
g1cur = 0
g2enc = 0
g2cur = 0
g3enc = 0
g3cur = 0


# Initialize the CAN bus
bus = can.Bus(interface='socketcan', channel='can0', bitrate=500000, poll_interval=0.01, monitor=False, timing=None)
db = cantools.database.load_file('******_dbc.dbc') #path of .dbc file

# Threshold to detect "neutral" position for joysticks (centered at 32767)
JOYSTICK_NEUTRAL_THRESHOLD = 2000  # Joystick position within 1000 of neutral (32767)

# Neutral position for joysticks
NEUTRAL_POSITION = 32767
JOYSTICK_MIN = 1
JOYSTICK_MAX = 65535

# Button mappings to CAN message IDs
BUTTON_CAN_IDS = {
    289: 0x600,  # E-stop Button mapped to CAN ID 0x600
    288: 0x305,  # Record/Replay mapped to CAN ID 0x305
    290: 0x308,  # End effector mapped to CAN ID 0x308
}

# Count variable for record/replay
cnt = 0
xnt = 0
tm = 0
arr1, arr2, arr3, arr4 = [], [], [], []  # Separate arrays for each joystick axis

def scale_value(value):
    """ Scale joystick value (0-65535) to desired output ranges (0 to 255) """
    if value < NEUTRAL_POSITION:
        # Scale the value from 0 to 32767 to the range 0 to 127
        scaled = (value / NEUTRAL_POSITION) * 128
        return max(1, min(127, int(scaled)))  # Clamp to 0-127
    elif value > NEUTRAL_POSITION:
        # Scale the value from 32767 to 65535 to the range 128 to 255
        scaled = ((value - NEUTRAL_POSITION) / (JOYSTICK_MAX - NEUTRAL_POSITION)) * 127 + 128
        return max(128, min(255, int(scaled)))  # Clamp to 128-255
    else:
        return 0  # Return 0 when the joystick is at the neutral position

def send_can_message(x1, y1, x2, y2):
    # Create a CAN message
    message = can.Message(
        arbitration_id=0x400,  # Example ID, change as needed
        data=[x1, y1, x2, y2],
        is_extended_id=False
    )
    try:
        bus.send(message)
        print(f'Sent: {message}')
    except can.CanError:
        print("Message NOT sent")

def send_can_message1(data, can_id):
    """ Send a single CAN message with data """
    message = can.Message(
        arbitration_id=can_id,  # CAN ID for the specific button or axis
        data=[data],  # Single byte of data
        is_extended_id=False
    )
    try:
        bus.send(message)
        print(f'Sent: {message}')
    except can.CanError:
        print(f"Message NOT sent for CAN ID {can_id}")

def reset(angle):
  #Definition to send resetting drive code to eps32's
  steps = angle/1.8
    #Logic for angle resetting

def receive_can():
    try:
        message = bus.recv()  # Wait for a message
        if message:
            print(f"Received message: ID={hex(message.arbitration_id)}, Data={message.data.hex()}")
            # Process received message based on CAN ID
            if message.arbitration_id == 0x100: # Left-most node
                g1enc = message.data
                print(f"Processing Encoder G1 data: {message.data}")
            elif message.arbitration_id == 0x150:
                g1cur = message.data
                print(f"Processing Sensor G1 data: {message.data}")
            elif message.arbitration_id == 0x200: # Middle node
                g2enc = message.data
                print(f"Processing Encoder G2 data: {message.data}")
            elif message.arbitration_id == 0x250:
                g2cur = message.data
                print(f"Processing Sensor G2 data:: {message.data}")
            elif message.arbitration_id == 0x300: # Right-most node
                g3enc = message.data
                print(f"Processing Encoder G3 data: {message.data}")
            elif message.arbitration_id == 0x350:
                g3cur = message.data
                print(f"Processing Sensor G3 data:: {message.data}")
    except KeyboardInterrupt:
        print("Exiting...")
    except Exception as e:
        print(f"Error receiving CAN message: {e}")



def main():
    print("Listening for joystick input...")

    start_time = time.time()  # Start recording timer
    record_duration = 30  # Max duration for recording (30 seconds)
    joystick1_x = joystick1_y = joystick2_x = joystick2_y = 0
    button_press_times = {}  # Dictionary to track button press timestamps

    global cnt, xnt, tm, arr1, arr2, arr3, arr4

    for event in joystick.read_loop():
        receive_can()
        current_time = time.time()  # Get current time in seconds

        if current_time - start_time > record_duration and xnt == 1:
            print("Max record duration reached!")
            xnt = 0  # Stop recording after 30 seconds
            continue  # Skip any further input processing during the recording timeout

        if event.type == ecodes.EV_ABS:
            abs_event = categorize(event)

            # Joystick 1 (assumed ABS_X and ABS_Y)
            if abs_event.event.code == ecodes.ABS_X:
                joystick1_x = abs_event.event.value
            elif abs_event.event.code == ecodes.ABS_Y:
                joystick1_y = abs_event.event.value
            # Joystick 2 (assumed ABS_RX and ABS_RY)
            elif abs_event.event.code == ecodes.ABS_RX:
                joystick2_x = abs_event.event.value
            elif abs_event.event.code == ecodes.ABS_RY:
                joystick2_y = abs_event.event.value

            # Debug: Print joystick values
            print(f"Joystick 1: X={joystick1_x}, Y={joystick1_y}")
            print(f"Joystick 2: X={joystick2_x}, Y={joystick2_y}")

            # Send CAN messages for joystick axes
            send_can_message(
                scale_value(joystick1_x),
                scale_value(joystick1_y),
                scale_value(joystick2_x),
                scale_value(joystick2_y)
            )

        elif event.type == ecodes.EV_KEY:
            key_event = categorize(event)

            if key_event.event.value == 1:  # Button pressed
                button_code = key_event.event.code
                if button_code in BUTTON_CAN_IDS:
                    if button_code == 288 or button_code == 290: # Record/Replay and End effector
                        button_press_times[button_code] = current_time
                        print(f"Button {button_code} pressed")
                        time.sleep(0.1) # Debounce delay before beginning to send CAN codes
                        send_can_message1(1, BUTTON_CAN_IDS[button_code])
                    elif button_code == 289: # Emergency stop
                        send_can_message(0, BUTTON_CAN_IDS[button_code])
                      

            elif key_event.event.value == 0:  # Button released
                button_code = key_event.event.code
                if button_code in BUTTON_CAN_IDS:
                    if button_code in button_press_times:
                        press_duration = (current_time - button_press_times[button_code])
                        print(f"Button {button_code} released at {current_time}. Pressed for {press_duration:.4f} seconds")
                        del button_press_times[button_code]  # Remove the stored press time after release
                    if button_code == 288 and press_duration > 2:
                        time.sleep(0.1)
                        send_can_message1(3, BUTTON_CAN_IDS[button_code])
                    else:
                        time.sleep(0.1)
                        send_can_message1(0, BUTTON_CAN_IDS[button_code])
        
if __name__ == "__main__":
    main()
