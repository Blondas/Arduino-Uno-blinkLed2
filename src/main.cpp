#include <Arduino.h>
#include <Led.h>

extern void initialDelay();

void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
    initialDelay();
    initialBlinks();
}

void loop() {
    int interval = 1000;
    constantBlinking(interval);
}

void initialDelay() {
    delay(2000);
}