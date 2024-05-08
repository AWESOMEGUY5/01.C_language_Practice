#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int sum = 0, divisor = 0, grade = 0; 

	printf("중단하려면 음수를 입력하시오.\n");

	while (grade >= 0) {
		
		printf("성적을 입력하시오. : "); int N = scanf("%d", &grade);
		if (N == 1) {
			sum += grade;
			divisor++;
		} else {
			printf("잘못된 형식입니다.");
			return 1;
		}
	}
	sum = sum - grade;
	divisor--;

	float average = (float)sum / divisor;
	printf("평균은 %.2f점 입니다.", average);

	return 0;
}