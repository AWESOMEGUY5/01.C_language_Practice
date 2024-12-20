#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	//sum: 더한 수 출력, number1: 더할 값의 최댓값, number2: 더할 값 
	int n, number1;

	printf("정수를 입력하시오. :"), n = scanf("%d", &number1);

	if (n == 1) {
		int sum = 0, number2 = 0;
		while (number1 >= number2) {
			sum += number2;
			number2 = number2 + 2;
		}
		printf("1부터 %d까지 짝수의 합은 %d입니다.", number1, sum);
	}
}