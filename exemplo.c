#include <stdio.h>
#include <math.h>

float deg2rad(float deg) {
  float rd = (deg * M_PI) / 180.0;
  return rd;
}

void mostranome(){
    printf ("Angela!\n");
}

int main (void)
{
  printf ("Hello, world!\n");

  printf("The radian of 135 degree is %3.4f\n", deg2rad(135.0));
  mostranome();

  return 0;
}
