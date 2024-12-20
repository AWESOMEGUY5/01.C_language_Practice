#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y, z;

	printf("세 개의 정수를 입력하시오. (x, y, z)"); scanf("%d %d %d", &x, &y, &z);
	printf("세 개 정수의 합은 %d", x + y + z);

	return 0;
}
