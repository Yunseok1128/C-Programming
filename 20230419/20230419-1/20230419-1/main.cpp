#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned)time(NULL));

	int answer = rand() % 100 + 1;
	int guess;
	int trise = 0;

	do{
		printf("������ �����Ͽ� �����");
		scanf("%d", &guess);
		trise++;
		if (guess < answer)
			printf("HIGH\n");
		if (guess > answer)
			printf("LOW\n");
	} while (guess != answer);

	printf("�����Դϴ�. �õ�Ƚ��=%d\n", trise);
	return 0;
}