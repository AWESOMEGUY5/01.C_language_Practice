#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	double radius, area;
	printf("���� �������� �Է��Ͻÿ�. : "), scanf("%lf", &radius);

	area = pow(radius, 2) * 3.14159;
	printf("���� �ѷ� : %.2lf", area);

	return 0;
}
