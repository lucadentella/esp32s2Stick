#include <Adafruit_NeoPixel.h>

Adafruit_NeoPixel strip(1, 18, NEO_GRB + NEO_KHZ800);


void setup() {

  Serial.begin(115200);
  Serial.println("rgbLedBlink");
  strip.begin();
  strip.setBrightness(10);
  strip.clear();
}

void loop() {

  delay(500);
  strip.setPixelColor(0, 255, 0, 0);
  strip.show();
  delay(500);
  strip.setPixelColor(0, 0, 255, 0);
  strip.show();
  delay(500);
  strip.setPixelColor(0, 0, 0, 255);
  strip.show();
}
