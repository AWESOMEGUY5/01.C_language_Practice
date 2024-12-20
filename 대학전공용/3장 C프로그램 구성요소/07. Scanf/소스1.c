#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int Number = 0; float Score = 0;
	printf("번호와 점수를 입력하십시오. "); 
	scanf("%d %f", &Number, &Score);

	printf("%d %.2f", Number, Score);
}