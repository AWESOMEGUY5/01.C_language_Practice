#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	unsigned int guessNum = 0, tries = 0, number;

	srand((unsigned)time(NULL));
	number = rand() % 100 + 1;

	do {
		printf("정답을 추측하시오 :"), scanf("%d", &guessNum);
		tries++;

		if (guessNum > number) {
			printf("High\n");
		} else if (guessNum < number) {
			printf("Low\n");
		}
	} while (guessNum != number);
	
	printf("축하합니다. 시도횟수 : %d", tries);
	return 0;
}