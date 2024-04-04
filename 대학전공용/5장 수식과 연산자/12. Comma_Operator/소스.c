#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)//콤마 연산자, 두개의 수식을 한 줄에서 순차적으로 실행하는데 사용. 연산 우선순위가 가장 낮다. 한정된 공간에 여러 문장을 넣을 때 사용한다.
{
	int x = 2, y = 4, z = 10;
	printf("Thank "), printf("you\n");
	printf("%d %d %d\n", x, y, z);
}