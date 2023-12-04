  class motor_driver {
    const int gpio_in1;
    const int gpio_in2;
    const int gpio_pwm;

  public:
    motor_driver(const int In1, const int In2, const int Pwm) : gpio_in1(In1), gpio_in2(In2), gpio_pwm(Pwm) {
      pinMode(In1, OUTPUT);
      pinMode(In2, OUTPUT);
      pinMode(Pwm, OUTPUT);
    }

    void set_motor_speed(float speed) {
      // Map speed to PWM value (0-255)
      int PWM = map(abs(speed), 0, 100, 0, 255);

      // Set the motor direction pins based on the sign of the speed
      if(speed == 0){
        digitalWrite(gpio_in1, LOW);
        digitalWrite(gpio_in2, LOW);
      } else
      {
        digitalWrite(gpio_in1, speed > 0 ? HIGH : LOW);
        digitalWrite(gpio_in2, speed > 0 ? LOW : HIGH);
      }

      // Set the motor PWM values
      analogWrite(gpio_pwm, abs(PWM));
    }
  };