#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	unsigned int answer, MAX, MIN = 1;

	printf("������ �Է��Ͻÿ�.(1���� 100����) : "), scanf("%u", &answer);
	printf("�ִ��� �Է��Ͻÿ�. "), scanf("%u", &MAX);
	
	srand((unsigned int)time(NULL));
	unsigned int computer = rand() % MAX + 1, tries = 0;
	
	do {
		// high
		if (answer < computer) {		
			MAX = computer;
			computer = rand() % (MAX - MIN + 1) + MIN;
		
		// low
		} else if (answer > computer) { 
			MIN = computer;
			computer = rand() % (MAX - MIN + 1) + MIN;
		}
		tries++;
	} while (answer != computer);
	printf("������ϴ�. ���� Ƚ���� %dȸ �Դϴ�.", tries);
	
	return 0;
}