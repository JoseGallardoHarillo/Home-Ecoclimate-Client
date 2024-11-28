#pragma once

/**
 * @brief Initializes the entire sensor system
 * 
 * @param gid Group ID for all sensors
 */
void setupSensors(String gid);

/**
 * @brief Activates a sensor management cycle
 */
void handleSensors();
