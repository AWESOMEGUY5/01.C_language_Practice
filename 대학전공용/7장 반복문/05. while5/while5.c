#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	//sum: ���� �� ���, number1: ���� ���� �ִ�, number2: ���� �� 
	int n, number1;

	printf("������ �Է��Ͻÿ�. :"), n = scanf("%d", &number1);

	if (n == 1) {
		int sum = 0, number2 = 0;
		while (number1 >= number2) {
			sum += number2;
			number2 = number2 + 2;
		}
		printf("1���� %d���� ¦���� ���� %d�Դϴ�.", number1, sum);
	}
}