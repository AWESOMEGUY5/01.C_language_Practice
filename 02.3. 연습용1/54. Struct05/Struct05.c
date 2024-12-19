#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

struct point
{
	int x, y;
}point1, point2;

int main(void)
{
	printf("첫번째 점의 좌표를 입력하시오. (x, y) >>> ");
	scanf_s("%d %d", &point1.x, &point1.y);

	printf("두번째 점의 좌표를 입력하시오. (x, y) >>> ");
	scanf_s("%d %d", &point2.x, &point2.y);

	int xdiff = point1.x - point2.x;
	int ydiff = point1.y - point2.y;

	double dist = sqrt(pow(xdiff, 2) + pow(ydiff, 2));
	printf("거리는 %lf입니다.", dist);

	return 0;
}