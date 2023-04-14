#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int x;
	int y;

	printf("정수를 입력하세요:");
	scanf("%d", &x);

	if (x < 0)
	{
		y = -x;
	}
	else
	{
		y = x;
	}
	printf("절대값은%d\n", y);
}