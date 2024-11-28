#pragma once

#include <stdint.h>

/**
 * @brief Interface that indicates the blind (vertical) opening level
 */
class WindowBlind {

    public:
        /**
         * @param angle Adjusts the opening degree. Possible values: 0 to 255.
         */
        virtual void setAngle(uint8_t angle);

};
