#include <stdio.h>
#include <math.h>

float deg2rad(float deg) {
  float rd = (deg * M_PI) / 180.0;
  return rd;
}

float rad2deg(float rad) {
  float deg = (rad * 180.0) / M_PI;
  return deg;
}

int main (void)
{
  printf ("Hello, world!\n");

  printf("The radian of 135 degree is %3.4f\n", deg2rad(135.0));

  printf ("Angela!\n");
  return 0;
}
