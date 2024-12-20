#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int input1;

	printf("변수(정수)를 입력하시오. : "), scanf("%d", &input1);
	if (input1 >= 100)
		printf("large");
	else
		printf("small");

	return 0;
}