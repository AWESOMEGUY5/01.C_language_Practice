#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	unsigned int answer, computer = 0, tries = 0, MAX, MIN = 1;

	printf("������ �Է��Ͻÿ�.(1���� 100����) : "), scanf("%u", &answer);
	printf("�ִ��� �Է��Ͻÿ�. "), scanf("%u", &MAX);

	
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
	printf("������ϴ�. ���� Ƚ���� %dȸ �Դϴ�.", tries);

}