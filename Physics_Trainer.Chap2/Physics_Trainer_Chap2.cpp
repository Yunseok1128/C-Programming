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

	printf("(1) �ӵ��� ��ȭ�� ����.  \n");
    printf("(2) �ӵ��� ���� Ŀ����.  \n");
	printf("(3) �ӵ��� ���� �۾�����.\n");
	printf("(4) �ӵ��� �����ϴ�. \n\n");

}


void Excersize_2_18(int solution, int answer)
{
	int velocity= 40;
	double speed = 0.50;
	int time = 1;
	int time2 = 1;

	printf("\n\n");
	printf("2-18 \n");
	printf("%d km/h�� �ӷ����� �޸��� �ڵ����� ���ᰡ ��������   \n", velocity);
	printf("������ ���ӵ� %.2lf m/s�������� ���ӵǾ���. \n\n", speed);

	printf("(a) �ڵ����� ������ ������ ������ �Ÿ��� ���ΰ�? \n");

	printf("(b) �ڵ����� ������ ������ �ɸ� �ð��� ���ΰ�? \n");

	printf("(c) �ڵ����� ó�� %d s ���� �̵��� �Ÿ��� �ټ� ���� %d s ���ȿ� �̵���  �Ÿ��� ���� ���ΰ�? \n\n", time, time2);

}


void Excersize_2_28(int solution, int answer)
{



	printf("\n\n");
	printf("2-28 \n");
	printf("�ʼӵ�  m/s�� ���� ���� ���� ��ü�� �ִ�. \n\n");

	printf("(a) �� ��ü�� �ö� �� �ִ� �ְ���� H�� ���ΰ�? \n");

	printf("(b) �� ��ü�� �ٽ� ���鿡�� �������� �� �ɸ��� �ð��� ���ΰ�? \n");



}

int main(void)
{

	printf("=================================================================\n");
	printf("======================= Halla University ========================\n");
	printf("======================= Future Mobility  ========================\n");
	printf("======================== Pysics Trainer  ========================\n");
	printf("========================   Chapter 2     ========================\n");
	printf("=================================================================\n");


	Excersize_2_8(0,0);
	Excersize_2_18(0, 0);
	Excersize_2_28(0, 0);
}