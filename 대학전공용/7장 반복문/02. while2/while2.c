#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int number1, times = 1, n;
	printf("출력하고 싶은 단 : "), n = scanf("%d", &number1);

	if (n == 1) {
		while (times < 10) {
			printf("%d x %d = %d\n", number1, times, number1 * times);
			times++;
		}
		return 0;
	} else {
		printf("잘못된 형식입니다.");
	}
	
}