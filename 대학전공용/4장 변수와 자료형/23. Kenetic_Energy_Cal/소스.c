#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main(void)
{
	double mass, speed, Ek;
	printf("����(kg) : "); scanf("%lf", &mass);
	printf("�ӷ�(m/s) : "); scanf("%lf", &speed);

	Ek = mass * pow(speed,2) / 2;

	printf("�������(J) : %.3lf", Ek);
	
	return 0;
}