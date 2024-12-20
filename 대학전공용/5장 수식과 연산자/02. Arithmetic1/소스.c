#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main(void)
{
	double x, y;

	printf("실수 2개를 입력하시오 : "); scanf("%lf %lf", &x, &y);

	printf("%lf + %lf = %lf\n", x, y, x + y);
	printf("%lf - %lf = %lf\n", x, y, x - y);
	printf("%lf * %lf = %lf\n", x, y, x * y);
	printf("%lf / %lf = %lf\n", x, y, x / y);

	return 0;
}