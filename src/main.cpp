#include <Arduino.h>
#include <spider_move_it.h>

void setup() {
  init_spider_move_it();
}

void loop() {
  up_spider_move_it();
  delay(1000);
  sit_spider_move_it();
  delay(1000);
  up_spider_move_it();
  delay(1000);
  bow_spider_move_it();
  delay(1000);
  up_spider_move_it();
  delay(1000);
  say_hello_spider_move_it();
  delay(1000);
}