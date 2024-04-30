#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
int main(void)
{
	int number;
	printf("정수를 입력하시오. : "), scanf("%d", &number);

	if (number < 0)
		number = -number;
	printf("절댓값은 %d입니다.", number);

	return 0;
}