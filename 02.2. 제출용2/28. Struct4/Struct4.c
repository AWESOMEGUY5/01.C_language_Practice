#include <stdio.h>

struct Point { int x, y; };

int main(void)
{
	struct Point p1 = { 10,20 };
	struct Point p2 = { 30,40 };

	p2 = p1; // ���� ����

	// if (p1 == p2) -> �� �Ұ���, ������ ����

	if (p1.x == p2.x && p1.y == p2.y) {
		printf("p1�� p2�� ���� �����ϴ�.");
	}

	return 0;
}