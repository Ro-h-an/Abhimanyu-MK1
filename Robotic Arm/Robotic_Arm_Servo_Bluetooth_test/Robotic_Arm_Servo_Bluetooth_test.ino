#include <Servo.h>

// Create servo objects for four servos
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

void setup() {
  // Attach the servos to their respective pins
  servo1.attach(3);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(9);

  // Initialize serial communication for Bluetooth
  Serial.begin(9600);
}

void loop() {
  // Check if data is available from the Bluetooth module
  if (Serial.available()) {
    char command = Serial.read(); // Read the incoming command

    switch (command) {
      case 'a': // Command to set servo1 to 0 degrees
        servo1.write(0);
        break;
      case 'b': // Command to set servo1 to 90 degrees
        servo1.write(90);
        break;
      case 'c': // Command to set servo1 to 180 degrees
        servo1.write(180);
        break;
      case 'd': // Command to set servo2 to 0 degrees
        servo2.write(0);
        break;
      case 'e': // Command to set servo2 to 90 degrees
        servo2.write(90);
        break;
      case 'f': // Command to set servo2 to 180 degrees
        servo2.write(180);
        break;
      case 'g': // Command to set servo3 to 0 degrees
        servo3.write(0);
        break;
      case 'h': // Command to set servo3 to 90 degrees
        servo3.write(90);
        break;
      case 'i': // Command to set servo3 to 180 degrees
        servo3.write(180);
        break;
      case 'j': // Command to set servo4 to 0 degrees
        servo4.write(0);
        break;
      case 'k': // Command to set servo4 to 90 degrees
        servo4.write(90);
        break;
      case 'l': // Command to set servo4 to 180 degrees
        servo4.write(180);
        break;
      default:
        // Handle invalid commands
        break;
    }
  }
}
