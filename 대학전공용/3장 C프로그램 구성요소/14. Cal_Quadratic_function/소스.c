#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	float Num = 0, Ans = 0;
	printf("실수를 입력하십시오. : "), scanf("%f", &Num);
	
	Ans = 3.0 * pow(2, Num) + 7.0 * Num + 11;
	printf("다항식의 값은 %.2f", Ans);
}