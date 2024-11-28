#pragma once

#include <stdint.h>

/**
 * @brief Interface that specifies how to regulate temperature control
 */
class TempChange {

    public:
        /**
         * @param tempChange Adjusts the level of heat or cold. Possible values: -128 to 127.
         *                   Negative values activate heating, and positive values activate
         *                   cooling.
         */
        virtual void setTempChange(int8_t tempChange);

};
