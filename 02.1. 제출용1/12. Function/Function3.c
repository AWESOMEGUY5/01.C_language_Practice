#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

unsigned int factorial(unsigned int a)
{
	unsigned int factoral_result = 1;
	for (unsigned int i = 1; i <= a; i++) {
		factoral_result = factoral_result * i;
	}
	return factoral_result;
}

int main(void)
{
	unsigned int x, result;
	printf("�˰� ���� ���丮���� ����? : "), scanf("%u", &x);
	result = factorial(x);

	printf("%u!�� ���� %u�Դϴ�.", x, result);
}