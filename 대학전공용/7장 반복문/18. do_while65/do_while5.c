#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	unsigned int answer, computer = 0, tries = 0, MAX, MIN = 1;

	printf("정답을 입력하시오.(1부터 100까지) : "), scanf("%u", &answer);
	printf("최댓값을 입력하시오. "), scanf("%u", &MAX);

	
	srand((unsigned int)time(NULL));
	computer = rand() % 100 + 1;

	do {
		if (answer < computer) { // high

			MAX = computer;
			computer = rand() % (MAX - MIN + 1) + MIN;
		} else if (answer > computer) { // low
			MIN = computer;
			computer = rand() % (MAX - MIN + 1) + MIN;
		}
		tries++;
	} while (answer != computer);
	printf("맞췄습니다. 맞춘 횟수는 %d회 입니다.", tries);

}