#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	double radius, area;
	printf("원의 반지름을 입력하시오. : "), scanf("%lf", &radius);

	area = pow(radius, 2) * 3.14159;
	printf("원의 둘레 : %.2lf", area);

	return 0;
}
