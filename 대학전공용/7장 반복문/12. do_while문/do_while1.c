#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int number, sum = 0;

	do {
		int n;
		printf("������ �Է��Ͻÿ�. : "), n = scanf("%d", &number);
		if (n == 1) {
			sum += number;
		} else {
			printf("\n�߸��� �����Դϴ�.\n");
		}
	} while (number != 0);

	printf("���ڵ��� �� : %d\n", sum);
	return 0;
}