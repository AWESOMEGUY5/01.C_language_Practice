#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int A = 0;
	
	printf("아스키 코드를 입력하시오 : "); scanf("%d", &A);

	printf("문자 : %c입니다.", (char)A);
}