#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) //���� ������ : (x > y) ? x : y; -> x�� ū ���(��) x ����, y�� ū ���(����) y����
{
	int x, y;
	printf("���� 2�� : "); scanf("%d %d", &x, &y);

	printf("ū �� = %d\n", (x > y) ? x : y);
	printf("���� �� = %d\n", (x < y) ? x : y);
	return 0;
}