import serial
import time

arduino = serial.Serial("COM3", 9600, timeout=1)

time.sleep(2)

print("Arduino connected")

while True:
    command = input("Enter J for servo movement: ")

    if command.upper() == "J":
        arduino.write(b"J")
        print("Jump command sent")

    elif command.upper() == "Q":
        break

arduino.close()
