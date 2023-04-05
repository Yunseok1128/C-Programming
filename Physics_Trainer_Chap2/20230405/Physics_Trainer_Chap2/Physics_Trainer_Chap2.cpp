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
	
	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here
		printf("가속도는 속도 Vector가 단위시간 동안 얼마나 변했는지를 나타내는 Vector량이다. \n");



		printf("=================================================================\n");
	}
		
	
}



int main(void)
{

	printf("=================================================================\n");
	printf("======================= Halla University ========================\n");
	printf("======================= Future Mobility  ========================\n");
	printf("======================== Pysics Trainer  ========================\n");
	printf("========================   Chapter 2     ========================\n");
	printf("=================================================================\n");


	Excersize_2_8(1,0);


}