#pragma once

#include <stdint.h>

/**
 * @brief Interface that specifies how to obtain a temperature measurement
 * 
 * @tparam T Measurement value type
 */
template <class T>
class Temperature {

    public:
        virtual T getTemperature();

};
