#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main(void)
{
	double r; const double PI = 3.14159;
	printf("구의 표면적을 입력하시오.(cm): "); scanf("%lf", &r);
	printf("표면적은 %.2lfcm^2입니다. \n체적은 %.2lfcm^3입니다.", 4 * PI * pow(r, 2), 4.0 / 3.0 * PI * pow(r, 3));

	return 0;
}