#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int year, result;

	printf("연도를 입력하시오. : "); scanf("%d", &year);

	result = (year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0);
	printf("윤년 여부 = %d", result);
}