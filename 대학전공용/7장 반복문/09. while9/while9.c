#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int Half_life, years = 0;
	double initial = 100.0, current;

	printf("�ݰ��⸦ �Է��Ͻÿ�. : "), scanf("%d", &Half_life);

	current = initial;
	while (current > initial / 10.0) {
		years += Half_life;
		current = current / 2.0;
		printf("%d�� �Ŀ� ���� �� : %.2f\n", years, current);
	}
	printf("1/10 ���Ϸ� �Ǳ���� ���� �ð� : %d��", years);
	return 0;
}