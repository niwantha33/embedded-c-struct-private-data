#include <stdio.h>

#include <gps_sensor.h>

int main(void)
{
	gps_config_t *p_gps = gps_init(0x24, 1);
	gps_read(p_gps);
	int16_t gps_lt = gps_lat(p_gps) ;
	int16_t gps_lg = gps_lng(p_gps);
	gps_deinti(p_gps);
	printf("sensor data :%d, %d", gps_lt, gps_lg);

	return 0;
}


