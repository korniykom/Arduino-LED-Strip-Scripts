#include <FastLED.h>

#define LED_PIN             4
#define NUM_LEDS            144
#define MAX_POWER_MILLIAMPS 500
#define COLOR_ORDER         GRB
#define CHIPSET             WS2812B
#define BRIGHTNESS          4
#define DELAY               24


 
CRGB leds[NUM_LEDS];

void setup() {
  FastLED.setMaxPowerInVoltsAndMilliamps(5,MAX_POWER_MILLIAMPS); 
  FastLED.addLeds<CHIPSET, LED_PIN, COLOR_ORDER> (leds, NUM_LEDS);
  FastLED.setBrightness(BRIGHTNESS);

}

void loop () {
  fill_gradient_RGB(leds, 0, CRGB::Red, NUM_LEDS - 1, CRGB::Blue);  FastLED.show();
  
}
