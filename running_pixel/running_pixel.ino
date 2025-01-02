#include <FastLED.h>

#define LED_PIN             4
#define NUM_LEDS            144
#define MAX_POWER_MILLIAMPS 500
#define COLOR_ORDER         GRB
#define CHIPSET             WS2812B
#define BRIGHTNESS          4


 
CRGB leds[NUM_LEDS];

void setup() {
   FastLED.setMaxPowerInVoltsAndMilliamps(5,1000); 
  FastLED.addLeds<CHIPSET, LED_PIN, COLOR_ORDER> (leds, NUM_LEDS);
  FastLED.setBrightness(BRIGHTNESS);
}

void loop () {

  for (int i = 0;  i < NUM_LEDS; i++) {
    leds[i] = CRGB::DarkOliveGreen;
    FastLED.show();
    delay(18);
    leds[i] = CRGB::Black;
    FastLED.show();
  }

  for (int i = NUM_LEDS - 1;  i > 0 ; i--) {
    leds[i] = CRGB::DarkSlateBlue;
    FastLED.show();
    delay(18);
    leds[i] = CRGB::Black;
    FastLED.show();
  }
}
