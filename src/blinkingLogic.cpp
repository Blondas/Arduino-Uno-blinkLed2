#include <Arduino.h>

void initialDelay();
void initialBlinks();
void blinkLoop(int, int, int, int);
void constantBlinking();

void blinkLoop(int inOutPin, int highTime, int lowTime, int howMany) {
    for (int i=0; i < howMany; ++i) {
        digitalWrite(inOutPin, HIGH);
        delay(highTime);
        digitalWrite(inOutPin, LOW);
        delay(lowTime);
    }
}

void initialBlinks() {
    initialDelay();
    blinkLoop(LED_BUILTIN, 100, 100, 3);
}

void constantBlinking() {
    delay(1000);
    blinkLoop(LED_BUILTIN, 100, 100, 2);
}

void initialDelay() {
    delay(2000);
};