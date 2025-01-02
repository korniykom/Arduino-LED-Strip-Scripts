#include <FastLED.h>

#define LED_PIN             4
#define NUM_LEDS            144
#define MAX_POWER_MILLIAMPS 3000
#define COLOR_ORDER         GRB
#define CHIPSET             WS2812B
#define BRIGHTNESS          32
#define DELAY               24

uint8_t startHue = 0;
 
CRGB leds[NUM_LEDS];

void setup() {
  FastLED.setMaxPowerInVoltsAndMilliamps(5,MAX_POWER_MILLIAMPS); 
  FastLED.addLeds<CHIPSET, LED_PIN, COLOR_ORDER> (leds, NUM_LEDS);
  FastLED.setBrightness(BRIGHTNESS);

}

void loop () {
      fill_rainbow(leds, NUM_LEDS, startHue, 255/NUM_LEDS);
      delay(DELAY);
      FastLED.show();
      startHue++;
 
  
}
