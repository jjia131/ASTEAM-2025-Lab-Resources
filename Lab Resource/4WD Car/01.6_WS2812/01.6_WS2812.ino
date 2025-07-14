#include <Arduino.h>
#include <Adafruit_NeoPixel.h>
#include "Freenove_4WD_Car_WS2812.h"

void setup() {
 WS2812_Setup();      //WS2812 initialization
}

void loop() {
  WS2812_Show(5);
}
