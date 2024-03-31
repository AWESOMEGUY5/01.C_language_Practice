#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float Mile = 0, Meter = 0, kilometer = 0;
	printf("변환할 마일을 입력하시오. : "); scanf("%f", &Mile);
	Meter = Mile * 1609.344; kilometer = Meter / 1000;
	
	printf("%.0f 마일은 %.3f m, %.3f km 입니다.", Mile, Meter, kilometer);
	return 0;
}