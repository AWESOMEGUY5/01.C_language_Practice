#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int x, y, z, max_value;
	printf("정수 3개를 입력하시오."); scanf("%d %d %d", &x, &y, &z);
	max_value = (x > y) ? x : y, max_value = (max_value > z) ? max_value : z;
	printf("최댓값은 %d입니다.", max_value);

	return 0;
}