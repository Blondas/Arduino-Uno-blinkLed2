#include <Arduino.h>
#include <Led.h>

int ledState = LOW;

void blinkLoop(int inOutPin, int highTime, int lowTime, int howMany, unsigned long & blinkLoopMillis, int & howManyCnt) {
    if (howManyCnt <= howMany) {
        if (ledState == HIGH) {
            if (millis() - blinkLoopMillis > (unsigned long) highTime) {
                ledState = LOW;
            }
            blinkLoopMillis = millis();
        } else {
            if (millis() - blinkLoopMillis > (unsigned long) lowTime) {
                ledState = HIGH;
            }
            blinkLoopMillis = millis();
        }
        digitalWrite(inOutPin, HIGH);
    }
}

void initialBlinks() {
    unsigned long blinkLoopMillis = 0;
    int howManyCnt = 0;
    blinkLoop(LED_BUILTIN, 100, 100, 3, blinkLoopMillis, howManyCnt);
}

void constantBlinking(int interval) {
    unsigned long blinkLoopMillis = 0;
    int howManyCnt = 0;
    
    if (millis() - blinkLoopMillis > (unsigned long) interval) {
        howManyCnt = 0;
    }

    blinkLoop(LED_BUILTIN, 100, 100, 2, blinkLoopMillis, howManyCnt);
}
