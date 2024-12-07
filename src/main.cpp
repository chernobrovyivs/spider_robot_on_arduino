#include <Arduino.h>
#include <spider_dance_func.h>

void setup() {
  init_spider_legs_setup();
}

void loop() {
  spider_dance_func();
}