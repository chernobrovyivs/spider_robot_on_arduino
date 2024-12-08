#include <Arduino.h>
#include <Servo.h>

Servo leg_1, leg_1_1, leg_2, leg_2_1, leg_3, leg_3_1, leg_4, leg_4_1;

int legServoPos = 90;

void init_spider_move_it()
{
    leg_1.attach(2); leg_2.attach(3); leg_3.attach(4); leg_4.attach(5);
    leg_1_1.attach(6); leg_2_1.attach(7); leg_3_1.attach(8); leg_4_1.attach(9);
}

void sit_spider_move_it()
{
    leg_1_1.write(0); leg_3_1.write(0);
    leg_2_1.write(180); leg_4_1.write(180);
}

void up_spider_move_it()
{
    leg_1.write(90); leg_3.write(90);
    leg_2.write(90); leg_4.write(90);

    leg_1_1.write(90); leg_3_1.write(90);
    leg_2_1.write(90); leg_4_1.write(90);
}

void bow_spider_move_it()
{
    leg_3.write(120); leg_2.write(45);
    delay(1000);
    leg_3_1.write(0); leg_2_1.write(180);
    delay(1000);
}

void say_hello_spider_move_it()
{
    leg_3_1.write(0);
    delay(1000);
}