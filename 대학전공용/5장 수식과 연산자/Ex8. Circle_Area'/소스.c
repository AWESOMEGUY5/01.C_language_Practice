#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main(void)
{
	double r; const double PI = 3.14159;
	printf("���� ǥ������ �Է��Ͻÿ�.(cm): "); scanf("%lf", &r);
	printf("ǥ������ %.2lfcm^2�Դϴ�. \nü���� %.2lfcm^3�Դϴ�.", 4 * PI * pow(r, 2), 4.0 / 3.0 * PI * pow(r, 3));

	return 0;
}