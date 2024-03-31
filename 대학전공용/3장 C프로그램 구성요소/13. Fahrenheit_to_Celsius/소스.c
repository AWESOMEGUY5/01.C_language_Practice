#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float Fahrenheit, Celsius;
	printf("화씨값을 입력하시오. : "), scanf("%f", &Fahrenheit);
	
	Celsius = 5.0 / 9.0 * (Fahrenheit - 32);
	printf("섭씨값은 %.2f 입니다.", Celsius);

	return 0;
}