// �迭�� �ʱ�ȭ���� �ʾ��� ��
#define SIZE 5

#include <stdio.h>

int main(void)
{
	int score[SIZE] = { 0 };

	for (int i = 0; i < SIZE; i++) {
		printf("score[%d] = %d\n", i, *(score + i));
	}

	return 0;
}