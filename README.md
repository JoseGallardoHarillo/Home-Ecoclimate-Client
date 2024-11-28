# HomeEcoClimate (Client)

Home automation system for indoor climate control based on energy-saving principles. Client component for ESP8266 microcontroller.

## Development Environment

This project is designed to be used with [PlatformIO](https://platformio.org/).

## ESP8266 Microcontroller Configuration

The microcontroller can be configured for two distinct functionalities, depending on how the project is compiled. In either case, you must correctly specify the Wi-Fi network name and password that the board will connect to in order to operate as expected. These should be defined using the `SSID` and `PSK` variables in `src/main.cpp`. To enable one functionality or the other, comment and uncomment the lines in `src/main.cpp` that call the respective _setup_ and _handle_ functions for each mode, and import the appropriate headers. Further details can be found in the comments at the beginning of the `src/main.cpp` file.

### With Actuators

The microcontroller will manage:
- A servo motor connected to pin D2 to control temperature regulation.
- Another servo motor connected to pin D3 to adjust the angle of vertical blinds.
- A fan motor controlled by an L293D chip, connected as follows:
  - Pin D5 for speed control.
  - Pin D6 to activate forward direction.
  - Pin D7 to activate reverse direction (this will not be used, as the fan is only intended to operate in one direction).

Commands will be received from an MQTT broker, which should be specified in the `mqttServer` variable in `src/actuators.cpp`.

### With Sensors

In this configuration, the microcontroller will interface with a combined DHT11 temperature and humidity sensor, with the data signal connected to pin D1. Approximately every 10 seconds, it will send a reading of both parameters to the server implementing the system's REST API via a _POST_ request.

## Architecture

Device management is facilitated through libraries that abstract their use as drivers and through custom interfaces that adapt these components for the specific requirements of this project. For more details, refer to the integrated Doxygen documentation in the source code.
