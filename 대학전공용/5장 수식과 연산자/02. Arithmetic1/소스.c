#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main(void)
{
	double x, y;

	printf("�Ǽ� 2���� �Է��Ͻÿ� : "); scanf("%lf %lf", &x, &y);

	printf("%lf + %lf = %lf\n", x, y, x + y);
	printf("%lf - %lf = %lf\n", x, y, x - y);
	printf("%lf * %lf = %lf\n", x, y, x * y);
	printf("%lf / %lf = %lf\n", x, y, x / y);

	return 0;
}