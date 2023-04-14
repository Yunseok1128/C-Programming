#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int num; 

	printf("시험 점수를 입력하시오:");
	scanf("%d", &num);

	if (num >= 90)
	{
		printf("A입니다.\n");
	}
	else if (num >= 80)
	{
		printf("B입니다.\n");
	}
	else if (num >= 70)
	{
		printf("C입니다.\n");
	}
	else if (num >= 60)
	{
		printf("D입니다.\n");
	}
	else
	{
		printf("F입니다.\n");
	}

}