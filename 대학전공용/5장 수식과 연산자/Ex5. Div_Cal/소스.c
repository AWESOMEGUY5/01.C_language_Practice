#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int input;
	printf("������ �Է��Ͻÿ�. : "), scanf("%d", &input);
	printf("���� �ڸ� : %d \n���� �ڸ� : %d ", input / 10, input % 10);
}