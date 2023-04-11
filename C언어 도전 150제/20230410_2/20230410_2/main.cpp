#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main(void) 
{
	int x = 1;
	double y;
	y = x + M_PI;
	printf("%lf", y);
}