#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{	
	double x, y;
	printf("�Ǽ��� �Է��Ͻÿ�. : "), scanf("%lf %lf", &x, &y);
	printf("%.2lf %.2lf %.2lf %.2lf", x + y, x - y, x * y, x / y);
}