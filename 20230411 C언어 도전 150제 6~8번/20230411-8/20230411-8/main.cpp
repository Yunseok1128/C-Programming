#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int x;

	printf("���� ���Ա��� �־��ּ���:\n");
	scanf("%d", &x);

	if (x >= 500)
	{
		printf("������� ���� \n");
	}
	if (x > 500)
	{
		printf("%d���� ��ȯ \n", x - 500);
	}
	else
	{
		printf("%d�� ��ȯ \n", x);
	}
}
