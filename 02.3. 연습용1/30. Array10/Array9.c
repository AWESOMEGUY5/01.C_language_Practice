#define STUDENT 5

#include <stdio.h>

int get_average(int score[], int n);

int main(void)
{
	int score[STUDENT] = { 1,2,3,4,5 };
	int avg = get_average(score, STUDENT);
	printf("����� %d�Դϴ�.", avg);

	return 0;
}

int get_average(int *score, int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += *(score + i);
	}
	return sum / n;
}