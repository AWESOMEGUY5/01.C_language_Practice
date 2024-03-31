#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int x, y, result;

	printf("정수 두 개를 입력하시오. : "); scanf("%d %d", &x, &y);

	result = x + y; printf("%d + %d = %d\n", x, y, result);

	result = x - y; printf("%d - %d = %d\n", x, y, result);
	
	result = x * y; printf("%d * %d = %d\n", x, y, result);

	result = x / y; printf("%d / %d = %d\n", x, y, result);

	result = x % y; printf("%d %% %d = %d\n", x, y, result);

	return 0;
}