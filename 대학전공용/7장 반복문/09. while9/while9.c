#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int Half_life, years = 0;
	double initial = 100.0, current;

	printf("반감기를 입력하시오. : "), scanf("%d", &Half_life);

	current = initial;
	while (current > initial / 10.0) {
		years += Half_life;
		current = current / 2.0;
		printf("%d년 후에 남은 양 : %.2f\n", years, current);
	}
	printf("1/10 이하로 되기까지 남은 시간 : %d년", years);
	return 0;
}