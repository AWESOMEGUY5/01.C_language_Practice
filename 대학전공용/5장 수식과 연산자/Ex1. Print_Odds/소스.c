#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int x, y;
	printf("���� 2���� �Է��Ͻÿ�. : "); scanf("%d %d", &x, &y);
	printf("�� : %d \n������ : %d\n", x / y, x % y);

	return 0;
}