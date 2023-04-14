#include <stdio.h>

int main(void) 
{
	bool x;

	x = 10 > 5;

	if (x == 1) 
	{
		printf("10은 5보다 크다.");
	}
	else 
	{
		printf("10은 5보다 작다.");
	}
}