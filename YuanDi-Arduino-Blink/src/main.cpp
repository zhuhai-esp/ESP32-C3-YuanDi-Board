#include <Adafruit_NeoPixel.h>
#include <Arduino.h>

#define PIN_LED 8

Adafruit_NeoPixel pixels(1, PIN_LED, NEO_GRB + NEO_KHZ800);

void setup() {
  Serial.begin(115200);
  Serial.println("Hello ESP-C3!!");
  pixels.begin();
  pixels.setBrightness(10);
}

void loop() {
  for (int i = 0; i < 65536; i += 10) {
    pixels.setPixelColor(0, pixels.ColorHSV(i));
    pixels.show();
  }
}