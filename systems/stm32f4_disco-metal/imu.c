#include "sensors/imu.h"
#include <stdio.h>

void imu_init()
{
  printf("imu init\r\n");
}

bool imu_poll_accels(float *xyz)
{
  // TODO: actually use the hardware
  xyz[0] = 1;
  xyz[1] = 2;
  xyz[2] = 3;
  return true;
}
