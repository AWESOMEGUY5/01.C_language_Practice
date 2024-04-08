#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{	
	double height1, height2, width1, width2;
	printf("지팡이 높이를 입력하시오. : "); scanf("%lf", &height1);
	printf("지팡이 그림자의 길이를 입력하시오. : "); scanf("%lf", &width1);
	printf("피라미드까지의 거리를 입력하시오. : "); scanf("%lf", &width2);
	printf("피라미드의 높이는 %.2lf입니다.", height2 = height1 * width2 / width1);
}