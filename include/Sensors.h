#ifndef SENSORS_H
#define SENSORS_H

class Sensors {

public:

    static bool wallFront();
    static bool wallRight();
    static bool wallLeft();

private:
    // Sensor pins
    static int frontSensorPin, rightSensorPin, leftSensorPin;
};

#endif // SENSORS_H