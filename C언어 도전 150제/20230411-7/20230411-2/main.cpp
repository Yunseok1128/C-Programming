#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float x;
	float y;

	printf("일최고체감온도: \n");
	scanf("%f", &x);

	printf("지속된 날수: \n");
	scanf("%f", &y);

	if (35 <= x && 2 <= y)
	{
		printf("폭염 경보 발령 \n");
	}
	else if (33 <= x && 2 <= y)
	{ 
		printf("폭염 주의보 발령 \n");
	}
	else
	{
		printf("폭염 없음 \n");
	}
}