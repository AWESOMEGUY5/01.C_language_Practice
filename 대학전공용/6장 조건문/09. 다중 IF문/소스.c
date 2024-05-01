#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int score;
	printf("성적을 입력하시오. : "), scanf("%d", &score);

	if (score >= 80)
	{
		if (score >= 90)
			printf("A학점입니다. \n");
	}
	else
	{
		printf("A학점이나 B학점은 아닙니다.");
	}
}
