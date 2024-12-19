#include <stdio.h>

struct point
{
	int x, y;
};

struct rect
{
	struct point p1, p2;
}r;

int main(void)
{
	printf("왼쪽 상단의 좌표를 입력하시오. >>> ");
	scanf_s("%d %d", &r.p1.x, &r.p1.y);

	printf("오른쪽 하단의 좌표를 입력하시오. >>> ");
	scanf_s("%d %d", &r.p2.x, &r.p2.y);

	int w = r.p2.x - r.p1.x;
	int h = r.p2.y - r.p1.y;

	int area = w * h;
	int peri = 2 * (w + h);

	printf("면적은 %d 이고 둘레는 %d 입니다.", area, peri);
	return 0;
}