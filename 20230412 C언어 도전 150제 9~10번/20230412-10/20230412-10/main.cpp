#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int num; 

	printf("���� ������ �Է��Ͻÿ�:");
	scanf("%d", &num);

	if (num >= 90)
	{
		printf("A�Դϴ�.\n");
	}
	else if (num >= 80)
	{
		printf("B�Դϴ�.\n");
	}
	else if (num >= 70)
	{
		printf("C�Դϴ�.\n");
	}
	else if (num >= 60)
	{
		printf("D�Դϴ�.\n");
	}
	else
	{
		printf("F�Դϴ�.\n");
	}

}