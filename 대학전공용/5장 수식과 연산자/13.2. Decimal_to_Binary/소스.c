#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	unsigned int a;
	printf("��ȯ�� �������� �Է� : "), scanf("%u", &a);
	unsigned int mask = 1 << 7;
	printf("������ : ");

	((a & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((a & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((a & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((a & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((a & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((a & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((a & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	printf("\n");
}