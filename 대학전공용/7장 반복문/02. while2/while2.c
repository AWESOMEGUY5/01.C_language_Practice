#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int number1, times = 1, n;
	printf("����ϰ� ���� �� : "), n = scanf("%d", &number1);

	if (n == 1) {
		while (times < 10) {
			printf("%d x %d = %d\n", number1, times, number1 * times);
			times++;
		}
		return 0;
	} else {
		printf("�߸��� �����Դϴ�.");
	}
	
}