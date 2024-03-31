#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int number = 0;
	printf("16진수 수를 입력하시오. : "); scanf("%x", &number);

	printf("8진수로는 %04o입니다. \n",number);
	printf("10진수로는 %d입니다. \n", number);
	printf("16진수로는 %#x입니다. \n", number);

	return 0;
}
