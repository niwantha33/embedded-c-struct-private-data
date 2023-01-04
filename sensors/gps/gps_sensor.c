#include "gps_sensor.h"
#include "stdint.h"
#include <stdlib.h>


// Create a struct data structure for the sensor
// add the data
// then call them in header file
struct gps_sensor_config{
	uint8_t i2c_address;
	uint8_t gps_enable;

	int16_t gps_lng;
	int16_t gps_lat;
};

//create  struct function
gps_config_t *gps_init(uint8_t i2c_address, uint8_t st)
{
	gps_config_t *p_gps_data =malloc(sizeof(gps_config_t));

	p_gps_data->i2c_address = i2c_address;
	p_gps_data->gps_enable = st;
	return p_gps_data;

}
void gps_read(gps_config_t *p_gps_data)
{
	p_gps_data->gps_lat = 81.;
	p_gps_data->gps_lat = 8;
}

int16_t gps_lng(gps_config_t *p_gps_data)
{
	return p_gps_data->gps_lng;
}
int16_t gps_lat(gps_config_t *p_gps_data)
{
	return p_gps_data->gps_lat;
}

void gps_deinti(gps_config_t *p_gps_data)
{
	free(p_gps_data);
}


