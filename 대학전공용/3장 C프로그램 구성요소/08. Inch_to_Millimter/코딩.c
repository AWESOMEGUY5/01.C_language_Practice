#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //입.출력 라이브러리

int main(void)
{
	double Inch = 0, Millimeter = 0;
	printf("인치 단위로 입력 : "); scanf("%lf", &Inch);

	Millimeter = Inch * 25.4;
	printf("%.3lf inch = %.3lfmm", Inch, Millimeter);
	return 0;
}