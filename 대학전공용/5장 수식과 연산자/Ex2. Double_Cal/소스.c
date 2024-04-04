#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{	
	double x, y;
	printf("실수를 입력하시오. : "), scanf("%lf %lf", &x, &y);
	printf("%.2lf %.2lf %.2lf %.2lf", x + y, x - y, x * y, x / y);
}