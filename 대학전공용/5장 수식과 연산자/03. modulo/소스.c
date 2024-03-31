#define _CRT_SECURE_NO_WARNINGS
#define one_minute 60

#include <stdio.h>

int main(void)
{
	int input, minute, second;

	printf("변환할 초를 입력하시오. : "); scanf("%d", &input);

	minute = input / one_minute; second = input % one_minute;

	printf("%d초는 %d분 %d초 입니다.", input, minute, second);
}