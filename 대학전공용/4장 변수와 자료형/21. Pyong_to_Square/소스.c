#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	const double Pyong = 3.3; double Square_meter, Squae_pyong;

	printf("변환할 평수를 입력하시오. : "); scanf("%lf", &Squae_pyong);
	Square_meter = Squae_pyong / Pyong;

	printf("%.3lf평은 %.3lf제곱미터입니다.", Squae_pyong, Square_meter);

	return 0;
}