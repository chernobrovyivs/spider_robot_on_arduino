#include <Arduino.h>
#include <Servo.h>

Servo servo[8];

int servopos = 90;


void init_spider_legs_setup() 
{
  for (int i = 0; i < 8; i += 1) servo[i].attach(2 + i);
  for (int i = 0; i < 8; i += 1) servo[i].write(90);
}


void spider_dance_func()
{
  for (int i = 0; i < 4; i++)
  {
    servo[4].write(90); servo[5].write(90); 
    servo[6].write(90); servo[7].write(90); 
    delay(200);
    servo[4].write(60); servo[5].write(120); 
    servo[6].write(60); servo[7].write(120); 
    delay(200);
  }
  delay(1000);
  for (; servopos < 135; servopos++) 
  {
    servo[4].write(servopos); servo[5].write(180 - servopos); 
    servo[6].write(180 - servopos); servo[7].write(servopos);  
    delay(6);
  }
  for (; servopos > 45; servopos--) 
  {
    servo[4].write(servopos);  servo[5].write(180 - servopos); 
    servo[6].write(180 - servopos); servo[7].write(servopos);  
    delay(6);
  }
  delay(1000);
  servo[4].write(75); delay(100);servo[0].write(105); 
  delay(100); servo[4].write(90); delay(100);

  servo[5].write(75); delay(100);servo[1].write(105); 
  delay(100); servo[5].write(90); delay(100);

  servo[6].write(75); delay(100);servo[2].write(105); 
  delay(100); servo[6].write(90); delay(100);

  servo[7].write(75); delay(100);servo[3].write(105); 
  delay(100); servo[7].write(90); delay(100);

  servo[0].write(90); servo[1].write(90);
  servo[2].write(90); servo[3].write(90); delay(1000);
  delay(1000);
  servo[4].write(75); delay(100);servo[0].write(75); 
  delay(100); servo[4].write(90); delay(100);

  servo[5].write(75); delay(100);servo[1].write(75); 
  delay(100); servo[5].write(90); delay(100);

  servo[6].write(75); delay(100);servo[2].write(75); 
  delay(100); servo[6].write(90); delay(100);

  servo[7].write(75); delay(100);servo[3].write(75); 
  delay(100); servo[7].write(90); delay(100);

  servo[0].write(90); servo[1].write(90);
  servo[2].write(90); servo[3].write(90); delay(1000);
  delay(1000);
}