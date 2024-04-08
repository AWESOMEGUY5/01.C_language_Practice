#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int input, bit_mover;

	printf("정수를 입력하시오 : "), scanf("%d", &input);
	printf("2를 곱하고 싶은 횟수 : "), scanf("%d", &bit_mover);
	printf("%d << %d 의 값 : %d", input, bit_mover, input << bit_mover);
}
