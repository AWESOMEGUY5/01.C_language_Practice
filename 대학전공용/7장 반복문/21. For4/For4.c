#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	unsigned int input1, result = 1;
	printf("���丮���� ������ �Է��Ͻÿ�. : "), scanf("%u", &input1);

	for (unsigned int i = 1; i <= input1; i++) {
		result = result * i;
	}
	printf("%u!�� %u�Դϴ�.", input1, result);
	return 0;
}