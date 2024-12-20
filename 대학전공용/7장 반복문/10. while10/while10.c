#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int gems, hours, n;

	printf("세균의 수와 배양할 시간을 입력하시오. : "), n = scanf("%d %d", &gems, &hours);

	if (n == 2) {
		int i = 0;
		while (i < hours) {
			gems *= 4;
			i++;
		}
		printf("%d시간 배양 후 세균은 %d마리입니다.", hours, gems);
		return 0;
	} else {
		printf("부적절한 형식입니다.");
	}
}