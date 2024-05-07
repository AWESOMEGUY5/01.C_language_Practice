#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int x, y, n;

	printf("x, y좌표를 입력하시오. : "), n = scanf("%d %d", &x, &y);
	
	if (n == 2) {
		if (x > 0 && y > 0) {
			printf("1사분면");
		} else if (x < 0 && y > 0) {
			printf("2사분면");
		} else if (x < 0 && y < 0) {
			printf("3사분면");
		} else {
			printf("4사분면");
		}
	} else {
		printf("잘못된 형식입니다.");
		return 1;
	}
	return 0;
}