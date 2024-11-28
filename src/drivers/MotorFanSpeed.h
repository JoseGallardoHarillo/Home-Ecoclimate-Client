#pragma once

#include <L293.h>
#include "FanSpeed.h"

class MotorFanSpeed : public FanSpeed {

    private:
        L293 motor;

    public:
        /**
         * @param speedPin Pin number used to control the motor speed
         * @param forwardPin Pin number used to indicate the forward direction to the motor
         * @param backwardPin Pin number used to indicate the backward direction to the motor
         */
        MotorFanSpeed(uint8_t speedPin, uint8_t forwardPin, uint8_t backwardPin);
        void setFanSpeed(uint8_t fanSpeed);

};
