#include <stdio.h>

#define STUDENTS 5

int get_average(int score[], int n);

int main(void)
{
	int scores[STUDENTS] = { 1,2,3,4,5 }, avg;
	avg = get_average(scores, STUDENTS);

	printf("����� %d�Դϴ�.", avg);
	
	return 0;
}
// �迭�� ����, �迭�� ���� �ּҰ� ���޵�.
int get_average(int score[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++) 
		sum += score[i];
		
	return sum / n;
}