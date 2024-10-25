#include <Arduino.h>
#include <spider_dance_func.h>
#include <calibration_legs_func.h>

void setup() {
  init_calibration_leg_func();
  init_spider_func();
}

void loop() {
  calibration_legs_func();
}