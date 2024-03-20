#ifndef MOTORS_H
#define MOTORS_H

class Motors {

public:
    // Constructor
    Motors(int motor1Pin1, int motor1Pin2, int motor2Pin1, int motor2Pin2);

    // Methods to control the motors
    static void stop();
    static void moveForward();
    static void moveBackward();
    static void turnRight();
    static void turnLeft();

private:
    // Motor pins
    static int motor1Pin1, motor1Pin2, motor2Pin1, motor2Pin2;
};

#endif // MOTORS_H