#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
int main(void)
{
	int number;
	printf("정수를 입력하시오. : "), scanf("%d", &number);

	if (number / 2 == 0) {
		printf("짝수입니다.");
	} else {
		printf("홀수입니다.");
	}

	return 0;
}