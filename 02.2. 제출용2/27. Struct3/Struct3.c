#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

struct Point { int x, y; };
struct Rect { struct Point p1, p2; };

int main(void)
{
	struct Rect r;
	int w, h;

	printf("���� ����� ��ǥ�� �Է��Ͻÿ�. "), scanf("%d %d", &r.p1.x, &r.p1.y);
	printf("������ �ϴ��� ��ǥ�� �Է��Ͻÿ�. "), scanf("%d %d", &r.p2.x, &r.p2.y);

	w = r.p2.x - r.p1.x;
	h = r.p2.y - r.p1.y;

	printf("������ %d�̰� �ѷ��� %d�Դϴ�.", w * h, 2 * (w + h));
}