#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int money, change;
	int price, c100000, c50000, c10000, c5000, c1000, c500, c100, c50, c10, c5, c1;

	printf("물건 값을 입력하시오: ");
	scanf("%d", &price);

	printf("투입한 금액을 입력하시오: ");
	scanf("%d", &money);
	change = money - price;
    
	c100000 = change / 100000;
	change = change % 100000;

	c50000 = change / 50000;
	change = change % 50000;

	c10000 = change / 10000;
	change = change % 10000;

	c5000 = change / 5000;
	change = change % 5000;

	c1000 = change / 1000;
	change = change % 1000;

	c500 = change / 500;
	change = change % 500;

	c100 = change / 100;
	change = change % 100;

	c50 = change / 50;
	change = change % 50;

	c10 = change / 10;
	change = change % 10;

	c5 = change / 5;
	change = change % 5;

	c1 = change / 1;
	change = change % 1;

	printf("거스름돈은 다음과 같습니다. \n십만원권 수표: %d장\n", c100000);
	printf("오만원권: %d장\n", c50000);
	printf("만원권: %d장\n", c10000);
	printf("오천원권: %d장\n", c5000);
	printf("천원권: %d장\n", c1000);
	printf("오백원 동전: %d개\n", c500);
	printf("백원 동전: %d개\n", c100);
	printf("오십원 동전: %d개\n", c50);
	printf("십원 동전: %d개\n", c10);
	printf("오원 동전: %d개\n", c5);
	printf("일원 동전: %d개\n", c1);
	return 0;
}