#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int sum = 0, divisor = 0, grade = 0; 

	printf("�ߴ��Ϸ��� ������ �Է��Ͻÿ�.\n");

	while (grade >= 0) {
		
		printf("������ �Է��Ͻÿ�. : "); int N = scanf("%d", &grade);
		if (N == 1) {
			sum += grade;
			divisor++;
		} else {
			printf("�߸��� �����Դϴ�.");
			return 1;
		}
	}
	sum = sum - grade;
	divisor--;

	float average = (float)sum / divisor;
	printf("����� %.2f�� �Դϴ�.", average);

	return 0;
}