#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int x;
	printf("숫자를 입력하시오. : "), scanf("%d", &x);

	if (x) {
		printf("x는 0이 아닙니다.");
	} else if(!x)
	{
		printf("x는 0입니다.");
	}
	return 0;
	/*
	* 참과 거짓의 차이는 0이 아닌가 0인가를 판별하는 것입니다.
	*/
}