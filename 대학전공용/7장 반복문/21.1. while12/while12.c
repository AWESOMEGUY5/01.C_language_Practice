#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	unsigned int i = 1, fact = 1, k;
	printf("���丮���� ������ �Է��Ͻÿ�. : "), scanf("%u", &k);

	while (i <= k) {
		fact = fact * i;
		i++;
	}
	printf("%u!�� %u�Դϴ�.", k, fact);

	return 0;
}