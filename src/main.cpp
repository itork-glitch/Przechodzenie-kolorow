#include <Adafruit_NeoPixel.h>
#include <config.h>

void setup()
{
    strip.begin();
    strip.setBrightness(255);
}

void color()
{
    unsigned long startTime = millis();
    unsigned long elapsedTime = 0;
    const unsigned long colorDuration = 30000;

    while (elapsedTime < colorDuration) {
        for (int i = 0; i < NUM_PIXEL; i++) {
            strip.setPixelColor(i, strip.Color(255, 0, 0));
            strip.show();
            delay(10);
        }

        for (int i = 0; i < NUM_PIXEL; i++) {
            strip.setPixelColor(i, strip.Color(255, 77, 0));
            strip.show();
            delay(10);
        }

        for (int i = 0; i < NUM_PIXEL; i++) {
            strip.setPixelColor(i, strip.Color(255, 255, 0));
            strip.show();
            delay(10);
        }

        for (int i = 0; i < NUM_PIXEL; i++) {
            strip.setPixelColor(i, strip.Color(0, 255, 0));
            strip.show();
            delay(10);
        }

        for (int i = 0; i < NUM_PIXEL; i++) {
            strip.setPixelColor(i, strip.Color(0, 255, 255));
            strip.show();
            delay(10);
        }

        for (int i = 0; i < NUM_PIXEL; i++) {
            strip.setPixelColor(i, strip.Color(0, 0, 255));
            strip.show();
            delay(10);
        }

        for (int i = 0; i < NUM_PIXEL; i++) {
            strip.setPixelColor(i, strip.Color(144, 0, 255));
            strip.show();
            delay(10);
        }

        for (int i = 0; i < NUM_PIXEL; i++) {
            strip.setPixelColor(i, strip.Color(255, 0, 77));
            strip.show();
            delay(10);
        }

        elapsedTime = millis() - startTime;
    }

    for (int i = 0; i < NUM_PIXEL; i++) {
        strip.setPixelColor(i, strip.Color(0, 0, 0));
        strip.show();
        delay(20);
    }
}

void rainbow()
{
    unsigned long startTime = millis();
    unsigned long elapsedTime = 0;
    const unsigned long rainbowDuration = 30000;
    int rainbow = 0;

    while (elapsedTime < rainbowDuration) {
        strip.rainbow(rainbow);
        strip.show();
        delay(15);

        elapsedTime = millis() - startTime;
        rainbow -= 256;
    }

    for (int i = 0; i < NUM_PIXEL; i++) {
        strip.setPixelColor(i, strip.Color(0, 0, 0));
        strip.show();
        delay(20);
    }
}

void loop()
{
    color();
    delay(100);
    rainbow();
}