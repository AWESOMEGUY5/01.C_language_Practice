#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main(void)
{
	double width, length, height, Cubic;
	printf("상자의 가로, 세로, 높이를 한번에 입력하시오. : "); scanf("%lf %lf %lf", &width, &length, &height);
	
	Cubic = width * length * height;
	printf("상자의 부피는 %.3lfm^3입니다.", Cubic);
}
