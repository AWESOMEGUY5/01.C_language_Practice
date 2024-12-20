#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double Salry = 0, Year = 0;
	printf("한 해 연봉을 입력하시오. (단위:만원) : "); scanf("%lf", &Salry);
	Year = 100000 / Salry;
	
	printf("10억을 모으는데 걸리는 시간(단위 : 년) : %f", Year);
	
	return 0;
}