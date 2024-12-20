#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int distance; double angle;
	printf("거리를 입력하십시오. : "), scanf("%d", &distance);
	printf("각도를 입력하십시오. : "), scanf("%lf", &angle);
	printf("지구의 반지름은 %.2lf입니다.", distance * (360 / angle) / (2 * 3.14));
}