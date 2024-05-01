#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int year;

	printf("연도를 입력하시오. : "), scanf("%d", &year);

	if (year == 0)
	{
		printf("0으로 나눌 수 없습니다.");
		return 1;
	}
	
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) 
		printf("%d년은 윤년입니다. \n", year);
	else 
		printf("%d년은 윤년이 아닙니다.", year);

	return 0;
}