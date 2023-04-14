#include <stdio.h>

#define _USE_MATH_DEFINES
#include <math.h>


void main()
{
	double d = M_PI;

	printf("d = %f\n", floor(d*1000000)/1000000);
}
