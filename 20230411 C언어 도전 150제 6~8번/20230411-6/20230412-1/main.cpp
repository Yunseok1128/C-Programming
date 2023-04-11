#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int x;

	printf("나이를 입력해주세요: \n");
	scanf("%d", &x);

	if (x < 20)
	{
		printf("20세 미만시 30%% 할인 \n");
	}
	else 
	{
		printf("20이상 정가 \n");
	}
}
