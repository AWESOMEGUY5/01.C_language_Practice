#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int is_prime(int n), input;

	printf("������ �Է��Ͻÿ�. : "), scanf("%d", &input);

	if (is_prime(input)) {
		printf("%d�� �Ҽ��Դϴ�.\n", input);
	} else {
		printf("%d�� �Ҽ��� �ƴմϴ�. \n", input);
	}
	return 0;
}

int is_prime(int input)
{
	for (int n2 = input / 2, i = 2; i <= n2; input++) {
		if (input % 2 == 0) return 0;
	}
	return 1;
}
