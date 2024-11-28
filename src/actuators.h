#pragma once

/**
 * @brief Initializes the entire actuator system
 * 
 * @param gid Group ID for all actuators
 */
void setupActuators(const String gid);

/**
 * @brief Activates an actuator management cycle
 */
void handleActuators();
