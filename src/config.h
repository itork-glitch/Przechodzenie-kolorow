#include <Adafruit_NeoPixel.h>

#define NUM_PIXEL 60
#define PIN 6
#define SET NEO_GRB + NEO_KHZ800

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_PIXEL, PIN, NEO_GRB);