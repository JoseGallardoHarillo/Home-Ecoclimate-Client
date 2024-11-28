#pragma once

#include <stdint.h>

/**
 * @brief Interface that specifies how to control the fan speed
 */
class FanSpeed {

    public:
        /**
         * @param fanSpeed Adjusts the rotation speed. Possible values: 0 to 255.
         */
        virtual void setFanSpeed(uint8_t fanSpeed);

};
