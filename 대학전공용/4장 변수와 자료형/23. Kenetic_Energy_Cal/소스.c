#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main(void)
{
	double mass, speed, Ek;
	printf("질량(kg) : "); scanf("%lf", &mass);
	printf("속력(m/s) : "); scanf("%lf", &speed);

	Ek = mass * pow(speed,2) / 2;

	printf("운동에너지(J) : %.3lf", Ek);
	
	return 0;
}