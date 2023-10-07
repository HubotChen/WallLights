#include <FastLED.h>
#define NUM_LEDS      79
#define LED_PIN1      2
#define LED_PIN2      3
#define LED_PIN3      4
#define LED_PIN4      5

CRGB leds1[NUM_LEDS];
CRGB leds2[NUM_LEDS];
CRGB leds3[NUM_LEDS];
CRGB leds4[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812B, LED_PIN1, GRB>(leds1, NUM_LEDS);
  FastLED.addLeds<WS2812B, LED_PIN2, GRB>(leds2, NUM_LEDS);
  FastLED.addLeds<WS2812B, LED_PIN3, GRB>(leds3, NUM_LEDS);
  FastLED.addLeds<WS2812B, LED_PIN4, GRB>(leds4, NUM_LEDS);
  FastLED.setBrightness(255);
  Serial.begin(9600);

  
}

int rainbowHue = 0;
int sat = 200;
int bright = 255;

int h = 35;
int s = 190;
int v = 255;

void loop() {
  EVERY_N_MILLISECONDS(1000) {
    for (int i = 0; i < NUM_LEDS; i++) {
      leds1[i] = CHSV(h, s, v);
      leds2[i] = CHSV(h, s, v);
      leds3[i] = CHSV(h, s, v);
      leds4[i] = CHSV(h, s, v);
    }
  }
  FastLED.show();
    
// 
//  EVERY_N_MILLISECONDS(50) {
//    for (int i = 0; i < NUM_LEDS; i++) {
//      leds1[i] = CHSV(rainbowHue + (i * 2), sat, bright);
//      leds2[i] = CHSV(rainbowHue + (i * 2) + 64, sat, bright);
//      leds3[i] = CHSV(rainbowHue + (i * 2) + 128, sat, bright);
//      leds4[i] = CHSV(rainbowHue + (i * 2) + 302, sat, bright);
//    }
//  }
//  
//  EVERY_N_MILLISECONDS(50) {
//    rainbowHue++;
//  }
  
  if (rainbowHue > 255) {
    rainbowHue = rainbowHue - 255;
  }
  FastLED.show();

}
