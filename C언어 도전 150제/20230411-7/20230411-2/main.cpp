#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float x;
	float y;

	printf("���ְ�ü���µ�: \n");
	scanf("%f", &x);

	printf("���ӵ� ����: \n");
	scanf("%f", &y);

	if (35 <= x && 2 <= y)
	{
		printf("���� �溸 �߷� \n");
	}
	else if (33 <= x && 2 <= y)
	{ 
		printf("���� ���Ǻ� �߷� \n");
	}
	else
	{
		printf("���� ���� \n");
	}
}