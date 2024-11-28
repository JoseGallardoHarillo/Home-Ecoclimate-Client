#pragma once

#include <Servo.h>
#include "TempChange.h"

class ServoTempChange : public TempChange {

    private:
        Servo servo;

    public:
        /**
         * @param servoPin Pin number to which the servo signal is connected
         */
        ServoTempChange(uint8_t servoPin);
        /** 
         * @param servoPin Pin number to which the servo signal is connected
         * @param servoMin Pulse width, in microseconds, corresponding to the
         *                 minimum angle of the servo (0º)
         * @param servoMax Pulse width, in microseconds, corresponding to the
         *                 maximum angle of the servo (180º)
         */
        ServoTempChange(uint8_t servoPin, uint16_t servoMin, uint16_t servoMax);
        void setTempChange(int8_t tempChange);

};
