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
	printf("가속도의 값이 +1이라는 의미는? \n\n");

	printf("(1) 속도의 변화가 없다.  \n\n");

	printf("(2) 속도가 점점 커진다.  \n\n");

	printf("(3) 속도가 점점 작아진다.\n\n");

	printf("(4) 속도가 일정하다. \n\n");

}


void Excersize_2_18(int solution, int answer)
{
	double velocity = 40.0;
	double speed = 0.50;
	double time = 1.0;
	double time2 = 1.0;

	printf("\n\n");
	printf("2-18 \n");
	printf("%.1lf km/h의 속력으로 달리는 자동차가 연료가 떨어져서   \n", velocity);
	printf("일정한 가속도 %.2lf m/s^2으로 감속되었다. \n\n", speed);

	printf("(a) 자동차가 정지할 때까지 주행한 거리는 얼마인가? \n\n");

	printf("(b) 자동차가 정지할 때까지 걸린 시간은 얼마인가? \n\n");

	printf("(c) 자동차가 처음 %.1lf s 동안 이동한 거리와 다섯 번재 %.1lf s 동안에 이동한 거리는 각각 얼마인가? \n\n", time, time2);

}


void Excersize_2_28(int solution, int answer)
{
	double speed2 = 49.0;


	printf("\n\n");
	printf("2-28 \n");
	printf("초속도 %.1lf m/s로 연직 위로 던진 물체가 있다. \n\n", speed2);

	printf("(a) 이 물체가 올라갈 수 있는 최고높이 H는 얼마인가? \n\n");

	printf("(b) 이 물체가 다시 지면에서 떨어지는 데 걸리는 시간은 얼마인가? \n\n");



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