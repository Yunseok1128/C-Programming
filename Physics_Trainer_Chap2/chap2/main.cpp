#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 


void Excersize_2_8(int solution, int answer)
{


	printf("\n\n");
	printf("2-8 \n");
	printf("���ӵ��� ���� +1�̶�� �ǹ̴�? \n\n");

	printf("(1) �ӵ��� ��ȭ�� ����.  \n\n");

	printf("(2) �ӵ��� ���� Ŀ����.  \n\n");

	printf("(3) �ӵ��� ���� �۾�����.\n\n");

	printf("(4) �ӵ��� �����ϴ�. \n\n");

}


void Excersize_2_18(int solution, int answer)
{
	double velocity = 40.0;
	double speed = 0.50;
	double time = 1.0;
	double time2 = 1.0;

	printf("\n\n");
	printf("2-18 \n");
	printf("%.1lf km/h�� �ӷ����� �޸��� �ڵ����� ���ᰡ ��������   \n", velocity);
	printf("������ ���ӵ� %.2lf m/s^2���� ���ӵǾ���. \n\n", speed);

	printf("(a) �ڵ����� ������ ������ ������ �Ÿ��� ���ΰ�? \n\n");

	printf("(b) �ڵ����� ������ ������ �ɸ� �ð��� ���ΰ�? \n\n");

	printf("(c) �ڵ����� ó�� %.1lf s ���� �̵��� �Ÿ��� �ټ� ���� %.1lf s ���ȿ� �̵��� �Ÿ��� ���� ���ΰ�? \n\n", time, time2);

}


void Excersize_2_28(int solution, int answer)
{
	double speed2 = 49.0;


	printf("\n\n");
	printf("2-28 \n");
	printf("�ʼӵ� %.1lf m/s�� ���� ���� ���� ��ü�� �ִ�. \n\n", speed2);

	printf("(a) �� ��ü�� �ö� �� �ִ� �ְ���� H�� ���ΰ�? \n\n");

	printf("(b) �� ��ü�� �ٽ� ���鿡�� �������� �� �ɸ��� �ð��� ���ΰ�? \n\n");



}

int main(void)
{

	printf("=================================================================\n");
	printf("======================= Halla University ========================\n");
	printf("======================= Future Mobility  ========================\n");
	printf("======================== Pysics Trainer  ========================\n");
	printf("========================   Chapter 2     ========================\n");
	printf("=================================================================\n");


	Excersize_2_8(0, 0);
	Excersize_2_18(0, 0);
	Excersize_2_28(0, 0);
}