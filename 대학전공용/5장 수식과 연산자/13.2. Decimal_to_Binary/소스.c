#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	unsigned int a;
	printf("변환할 이진수를 입력 : "), scanf("%u", &a);
	unsigned int mask = 1 << 7;
	printf("이진수 : ");

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