#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int input, bit_mover;

	printf("������ �Է��Ͻÿ� : "), scanf("%d", &input);
	printf("2�� ���ϰ� ���� Ƚ�� : "), scanf("%d", &bit_mover);
	printf("%d << %d �� �� : %d", input, bit_mover, input << bit_mover);
}
