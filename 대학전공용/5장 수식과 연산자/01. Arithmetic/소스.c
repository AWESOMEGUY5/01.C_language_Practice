#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int x, y;
	printf("정수 2개를 입력하시오. : "); scanf("%d %d", &x, &y);

	printf("%d + %d = %d\n", x, y, x + y);
	printf("%d - %d = %d\n", x, y, x - y);
	printf("%d * %d = %d\n", x, y, x * y);
	printf("%d / %d = %d\n", x, y, x / y);
	printf("%d %% %d = %d\n", x, y, x % y);
	
	return 0;
}