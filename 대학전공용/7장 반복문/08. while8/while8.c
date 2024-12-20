#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int num1, num2, temp, n;

	printf("두 정수를 입력하시오. : "), n = scanf("%d %d", &num1, &num2);
	if (n == 2 && num1 != 0) {
		while (num2 != 0) {
			temp = num1 % num2;
			num1 = num2;
			num2 = temp;
		}
		printf("최대공약수는 %d입니다.", num1);
		return 0;
	} else {
		printf("잘못된 형식입니다.");
		return 1;
	}
	
}