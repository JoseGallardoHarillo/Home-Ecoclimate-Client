#include <SimpleDHT.h>
#include "Humidity.h"
#include "Temperature.h"

/**
 * @brief Result of the DHT11 sensor measurement with error code
 * 
 * @tparam T Measurement value type
 */
template <class T>
struct DHTResult {
    int error;
    T result;
};

class DHT11HumAndTemp : public Humidity<DHTResult<float>>, public Temperature<DHTResult<float>> {

    private:
        SimpleDHT11 sensor;

    public:
        /**
         * @param signalPin Signal pin of the DHT11 sensor
         */
        DHT11HumAndTemp(uint8_t signalPin);
        DHTResult<float> getHumidity();
        DHTResult<float> getTemperature();

};
