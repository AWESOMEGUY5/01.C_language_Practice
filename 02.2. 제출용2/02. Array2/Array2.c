#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int sum = 0, score[5] = { 0 }, average;

	for (int i = 0; i < 5; i++) {
		printf("�л����� ������ �Է��Ͻÿ�. : "),
			scanf("%d", &score[i]); //������ �켱���� : [] -> &
		sum += score[i];
	}
	printf("���� ��� : %d", average = sum / 5);
}