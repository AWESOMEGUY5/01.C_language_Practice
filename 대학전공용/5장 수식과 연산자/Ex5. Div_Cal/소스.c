#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int input;
	printf("정수를 입력하시오. : "), scanf("%d", &input);
	printf("십의 자리 : %d \n일의 자리 : %d ", input / 10, input % 10);
}