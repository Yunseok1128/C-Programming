#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int x;
	int y;

	printf("������ �Է��ϼ���:");
	scanf("%d", &x);

	if (x < 0)
	{
		y = -x;
	}
	else
	{
		y = x;
	}
	printf("���밪��%d\n", y);
}