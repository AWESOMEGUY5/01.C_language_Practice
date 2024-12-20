#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	unsigned int i = 1, fact = 1, k;
	printf("팩토리얼의 범위를 입력하시오. : "), scanf("%u", &k);

	while (i <= k) {
		fact = fact * i;
		i++;
	}
	printf("%u!는 %u입니다.", k, fact);

	return 0;
}