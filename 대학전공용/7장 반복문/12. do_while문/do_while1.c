#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int number, sum = 0;

	do {
		int n;
		printf("정수를 입력하시오. : "), n = scanf("%d", &number);
		if (n == 1) {
			sum += number;
		} else {
			printf("\n잘못된 형식입니다.\n");
		}
	} while (number != 0);

	printf("숫자들의 합 : %d\n", sum);
	return 0;
}