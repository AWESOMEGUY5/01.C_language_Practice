#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double number1 = 0;

	printf("실수를 입력하십시오. : "); scanf("%lf", &number1);
	printf("실수형식으로는 %.6lf입니다.\n", number1);
	printf("지수형식으로는 %e입니다.\n", number1);

	return 0;
}