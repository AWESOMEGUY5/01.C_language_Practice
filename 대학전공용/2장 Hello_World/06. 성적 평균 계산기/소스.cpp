//과목의 평균 점수를 산출하는 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int 국어 = 0, 수학 = 0, 사회 = 0, 과학 = 0, 영어 = 0, 평균_점수 = 0;
	printf("국어 점수 : ", scanf("%d",&국어));
	printf("수학 점수 : ", scanf("%d", &수학));
	printf("사회 점수 : ", scanf("%d", &사회));
	printf("과학 점수 : ", scanf("%d", &과학));
	printf("영어 점수 : ", scanf("%d", &영어));

	평균_점수 = 국어 + 수학 + 사회 + 과학 + 영어 / 5;
	printf("평균 점수 : %d",평균_점수);

	return 0;
}