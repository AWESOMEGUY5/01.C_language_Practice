#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float Your_mass, Cal_mass;
	printf("몸무게를 입력하십시오. : "), scanf("%f", &Your_mass);
	Cal_mass = Your_mass * 0.17;
	printf("달에서의 몸무게는 %.2f kg 입니다.", Cal_mass);
}