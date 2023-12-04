# Arduino Motor Driver Library

The Arduino Motor Driver Library provides a simple interface for controlling a motor driver module with an Arduino microcontroller. This library allows you to easily set the speed and direction of a motor connected to the motor driver module.

## Features

- Supports common motor driver modules.
- Provides a method to set the motor speed.
- Handles motor direction based on the sign of the speed.
- Uses PWM (Pulse Width Modulation) to control the motor speed.

## Installation

1. Download the library as a ZIP file from the GitHub repository.
2. In the Arduino IDE, go to Sketch > Include Library > Add .ZIP Library.
3. Select the downloaded ZIP file and click "Open".
4. The library is now installed and ready to use.

## Usage

1. Connect the IN1, IN2, and PWM pins of the motor driver module to digital output pins on the Arduino.
2. Create an instance of the `motor_driver` class, passing the IN1, IN2, and PWM pin numbers to the constructor.
3. Call the `set_motor_speed()` method of the `motor_driver` instance to control the motor speed.

```cpp
#include <motor_driver.h>

// Define the IN1, IN2, and PWM pin numbers
const int in1Pin = 2;
const int in2Pin = 3;
const int pwmPin = 5;

// Create an instance of the motor_driver class
motor_driver motor(in1Pin, in2Pin, pwmPin);

void setup() {
  // Additional setup code...
}

void loop() {
  // Set the motor speed (range: -100 to 100)
  float speed = 50; // Example: set motor speed to 50%
  motor.set_motor_speed(speed);
  
  // Do something with the motor speed...
  
  // Additional loop code...
}
