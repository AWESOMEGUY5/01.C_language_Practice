#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	unsigned int input1, result = 1;
	printf("팩토리얼의 범위를 입력하시오. : "), scanf("%u", &input1);

	for (unsigned int i = 1; i <= input1; i++) {
		result = result * i;
	}
	printf("%u!는 %u입니다.", input1, result);
	return 0;
}