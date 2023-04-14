#include <stdio.h>

void main()
{
	int i = 2000000000;
	int j = 3000000000;

	printf("i:%d\n", i);
	printf("j:%d\n\n", j);
	printf("j 값이 다르게 출력된 이유는 int형 변수는 -2,147,483,648 ~ +2,147,483,647 범위의 값을 저장할 수 있기 때문이다\n\n\n");
}