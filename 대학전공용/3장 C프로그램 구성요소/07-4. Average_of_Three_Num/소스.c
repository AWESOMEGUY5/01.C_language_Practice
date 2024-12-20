// 세 수를 입력받아 평균을 산출하는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double num1 = 0, num2 = 0, num3 = 0, sum = 0, avg = 0;

	printf("세 수를 입력하십시오. : "); scanf("%lf %lf %lf", &num1, &num2, &num3);

	sum = num1 + num2 + num3; avg = sum / 3;
	printf("합계 : %.2lf \n평균 : %.2lf", sum, avg);
}