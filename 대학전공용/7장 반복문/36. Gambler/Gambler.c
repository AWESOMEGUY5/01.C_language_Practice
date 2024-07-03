#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int initial_money = 50, goal = 250, wins = 0;

	srand((unsigned)time(NULL));

	for (int i = 0; i < 100; i++) {
		int cash = initial_money;
		while (cash > 0 && cash < goal) {
			if ((double)rand() / RAND_MAX < 0.5)
				cash++;
			else
				cash--;
		}
		if (cash == goal)
			wins++;
		printf("�ʱ� �ݾ� : %d \n��ǥ �ݾ� : %d \n100�� �� %d�� ����\n", initial_money, goal, wins);
		return 0;
	}
}