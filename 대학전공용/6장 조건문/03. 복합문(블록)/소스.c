#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int score;

	printf("점수를 입력하시오. : "), scanf("%d", &score);
	if (score >= 90) {
		printf("합격입니다."); 
		printf("학금도 받을 수 있습니다.");
	} 
	return 0;
}
