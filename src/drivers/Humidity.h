#pragma once

#include <stdint.h>

/**
 * @brief Interface that specifies how to obtain a humidity measurement
 * 
 * @tparam T Measurement value type
 */
template <class T>
class Humidity {

    public:
        virtual T getHumidity();

};
