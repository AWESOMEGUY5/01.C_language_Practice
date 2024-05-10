#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main(void)
{
	unsigned int input;
	printf("세제곱을 표현할 범위를 입력하시오. : "), scanf("%u", &input);

	printf("==========================================\n");
	printf(" i \t\t\t i의 세제곱\n");
	printf("------------------------------------------\n");
	for (unsigned int i = 1; i <= input; i++) {
		printf(" %u \t\t\t %u \n", i, (unsigned)pow(i, 3));
	}
	printf("==========================================\n");

	return 0;
}