#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{	
	int height, feet; double inch;
	printf("키를 입력하시오(cm) : "); scanf("%d", &height);
	feet = height / (12 * 2.54);
	inch = (height - feet * 2.54 * 12) / 2.54;
	printf("%dcm는 %d피트 %.2lf인치입니다.", height, feet, inch);

	return 0;
}