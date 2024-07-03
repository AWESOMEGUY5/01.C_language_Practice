#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned)time(NULL));

	for (int i = 0; i < 10; i++) {
		int a = (rand() % 10 + 1);
		int b = (rand() % 10 + 1);
		int answer;

		printf("%d + %d = ", a, b), scanf("%d", &answer);

		if (a + b == answer) {
			printf("맞았습니다\n");
		} else {
			printf("틀렸습니다\n");
		}
	}
}