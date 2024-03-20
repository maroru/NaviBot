#include "Sensors.h"
#include "Motors.h"

#include <Arduino.h>

void setup() {
    // put your setup code here, to run once:
    Serial.begin(9600);
}

bool atGoal;

void loop() {
    // put your main code here, to run repeatedly:
    while (!atGoal) {
        if (!Sensors::wallLeft()) {
            Motors::turnLeft();
        }

        while (Sensors::wallFront()) {
            Motors::turnRight();
        }

        Motors::moveForward();
    } // end while
}