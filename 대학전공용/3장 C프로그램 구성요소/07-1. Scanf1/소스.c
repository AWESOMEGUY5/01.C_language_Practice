#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int First_input = 0, Second_input = 0, sum;
	
	printf("첫 번째 숫자를 입력하시오. : "); scanf("%d", &First_input);
	printf("두 번째 숫자를 입력하시오. : "); scanf("%d", &Second_input);

	printf("두 수의 합 : %d", sum = First_input + Second_input);

	return 0;
}