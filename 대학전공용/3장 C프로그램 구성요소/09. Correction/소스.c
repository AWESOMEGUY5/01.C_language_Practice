/* 첫 번째 프로그램*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int prod;
	scanf("%d", &x);
	scanf("%d", &y);
	prod = x * y;
	printf("곱셈의 결과 = %d", prod);

	return 0;
}
