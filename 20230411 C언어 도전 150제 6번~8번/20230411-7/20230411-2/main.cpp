#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float x;
	float y;

	printf("�Ϸ��� ���ְ�ü���µ�: \n");
	scanf("%f", &x);

	printf("���� ���ְ�ü���µ�: \n");
	scanf("%f", &y);

	if (35 <= x && 35 <= y)
	{
		printf("���� �溸 �߷� \n");
	}
	else if (33 <= x && 33 <= y)
	{ 
		printf("���� ���Ǻ� �߷� \n");
	}
	else
	{
		printf("���� ���� \n");
	}
}