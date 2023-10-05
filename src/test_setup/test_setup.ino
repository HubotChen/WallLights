#include <FastLED.h>
#define NUM_LEDS      79
#define LED_PIN       2

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness(255);
  Serial.begin(9600);

  
}

int rainbowHue = 0;
int sat = 255;
int bright = 255;

void loop() {

  for (int i = 0; i < NUM_LEDS; i++) {
  leds[i] = CHSV(37, 190, 150);
  }
  FastLED.show();
    
//  
//  for (int i = 0; i < NUM_LEDS; i++) {
//  leds[i] = CHSV(rainbowHue + (i * 2), sat, bright);
//  }
//  EVERY_N_MILLISECONDS(50) {
//    rainbowHue++;
//  }
//  if (rainbowHue > 255) {
//    rainbowHue = rainbowHue - 255;
//  }
//  FastLED.show();

}
