#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int x, y, r;
	printf("�� ���� ������ �Է��Ͻÿ�. : "), scanf("%d %d", &x, &y);
	
	while (y != 0) {
		r = x % y;
		x = y;
		y = r;
	}
	printf("�ִ� ������� %d�Դϴ�.", x);
	return 0;
}