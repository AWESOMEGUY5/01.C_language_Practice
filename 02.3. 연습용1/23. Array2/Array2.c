#define _CRT_SECURE_NO_WARNINGS
#define STUDENT 5

#include <stdio.h>

int main(void)
{
	int score[STUDENT];
	int sum = 0;
	
	for (int i = 0; i < STUDENT; i++) {
		printf("�л����� ������ �Է��Ͻÿ�. : "), scanf("%d", &score[i]);
	}
	for (int i = 0; i < STUDENT; i++) {
		sum += score[i];
	}
	printf("��� : %d", sum / STUDENT);
	return 0;
}