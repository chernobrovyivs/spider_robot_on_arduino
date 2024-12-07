#include <Arduino.h>
#include <Servo.h>

Servo servo[4][2];

//define servos' ports
const int servo_pin[4][2] = { {2, 3}, {4, 5}, {6, 7},{8, 9} };

const int servo_pin_leg[4] = {2, 4, 6, 8};

void init_calibration_leg_func()
{
  //initialize all servos
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      servo[i][j].attach(servo_pin[i][j]);
      delay(20);
    }
  }
}

void calibration_legs_func()
{
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      servo[i][j].write(45);
      delay(20);
    }
  }
}