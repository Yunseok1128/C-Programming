#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float x;
	float y;

	printf("첫째날 일최고체감온도는 얼마인가요? \n");
	scanf("%f", &x);

	printf("둘째날 일최고체감온도는 얼마인가요? \n");
	scanf("%f", &y);

	if (35 <= x && 35 <= y)
	{
		printf("폭염 경보 발령 \n");
	}
	else if (33 <= x && 33 <= y)
	{ 
		printf("폭염 주의보 발령 \n");
	}
	else
	{
		printf("폭염 없음 \n");
	}
}