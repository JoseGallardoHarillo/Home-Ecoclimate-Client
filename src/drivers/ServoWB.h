#pragma once

#include <Servo.h>
#include "WindowBlind.h"

class ServoWB : public WindowBlind {

    private:
        Servo servo;

    public:
        /**
         * @param pin Pin number to which the servo signal is connected
         */
        ServoWB(uint8_t pin);
        /**
         * @param pin Pin number to which the servo signal is connected
         * @param min Pulse width, in microseconds, corresponding to the
         *            minimum angle of the servo (0º)
         * @param max Pulse width, in microseconds, corresponding to the
         *            maximum angle of the servo (180º)
         */
        ServoWB(uint8_t pin, uint16_t min, uint16_t max);
        void setAngle(uint8_t angle);

};
