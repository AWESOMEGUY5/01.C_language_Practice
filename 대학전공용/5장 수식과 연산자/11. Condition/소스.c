#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) //조건 연산자 : (x > y) ? x : y; -> x가 큰 경우(참) x 실행, y가 큰 경우(거짓) y실행
{
	int x, y;
	printf("정수 2개 : "); scanf("%d %d", &x, &y);

	printf("큰 수 = %d\n", (x > y) ? x : y);
	printf("작은 수 = %d\n", (x < y) ? x : y);
	return 0;
}