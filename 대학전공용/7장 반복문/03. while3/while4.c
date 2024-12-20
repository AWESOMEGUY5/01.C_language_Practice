#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	//sum = 최종 더한 수를 출력, number1 : 더할 수, number2 : 더할 수의 최대값
	int sum = 0, number1 = 0, number2 = 1;
	printf("정수를 입력하시오. : "), scanf("%d", &number2);

	while (number1 <= number2) {
		sum += number1;
		number1++;
	}
	printf("1부터 %d까지의 합은 %d입니다.", number2 ,sum);
	return 0;
}