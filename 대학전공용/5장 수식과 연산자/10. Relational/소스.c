#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	printf("기사시험 과락 판독기\n");
	int math, language;
	printf("점수를 입력하시오 : "); scanf("%d %d", &math, &language);
	
	if (math >= 60 && language >= 60) 
	{
		printf("pass\n");
	}
	else
	{
		printf("not pass\n");
	}
	
	printf("기능사시험 과학 판독기"); 
	printf("점수를 입력하시오 : "); scanf("%d %d", &math, &language);
	if (math >= 60 || language >= 60)
	{
		printf("pass\n");
	}
	else
	{
		printf("not pass\n");
	}

	printf("1의 보수");
	return 0;
}