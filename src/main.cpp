#include <Arduino.h>
#include <Led.h>

extern void initialDelay();
extern void initialBlinks();
extern void blinkLoop(int, int, int, int);
extern void constantBlinking();

void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
    initialBlinks();
}

void loop() {
    constantBlinking();
}
