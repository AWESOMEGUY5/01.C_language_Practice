#define ROWS 3
#define COLS 5

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int s[ROWS][COLS];				// 2���� �迭 ����
	srand((unsigned)time(NULL));	// ���� ������ �ʱ�ȭ;

	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++)
			s[i][j] = 1 + rand() % 100;
	}
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++)
			printf("%2d ", s[i][j]);
		printf("\n");
	}
	return 0;
}