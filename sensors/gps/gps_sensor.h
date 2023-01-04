/*
 * gps_sensor.h
 *
 *  Created on: Jan 3, 2023
 *      Author: algobel
 */

#ifndef SENSORS_GPS_GPS_SENSOR_H_
#define SENSORS_GPS_GPS_SENSOR_H_

#include "stdio.h"
#include "stdbool.h"
#include "stdint.h"
#include <stdlib.h>

//then: use the typedef to define the struct
typedef struct gps_sensor_config gps_config_t;

// then decide the number of functions
gps_config_t *gps_init(uint8_t i2c_address, uint8_t st);

void gps_read(gps_config_t *p_gps_data);

int16_t gps_lng(gps_config_t *p_gps_data);
int16_t gps_lat(gps_config_t *p_gps_data);

void gps_deinti(gps_config_t *p_gps_data);

#endif /* SENSORS_GPS_GPS_SENSOR_H_ */
