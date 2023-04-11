#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int x;

	printf("돈을 투입구에 넣어주세요:\n");
	scanf("%d", &x);

	if (x >= 500)
	{
		printf("음료수가 나옴 \n");
	}
	if (x > 500)
	{
		printf("%d원이 반환 \n", x - 500);
	}
	else
	{
		printf("%d원 반환 \n", x);
	}
}
