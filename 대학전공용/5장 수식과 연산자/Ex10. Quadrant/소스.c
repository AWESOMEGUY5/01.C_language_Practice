#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int x, y;
	printf("x ��ǥ�� �Է��Ͻÿ�. : "), scanf("%d", &x);
	printf("y ��ǥ�� �Է��Ͻÿ�. : "), scanf("%d", &y);

	(x > 0 && y > 0) ? printf("1��и��Դϴ�.") : printf("");
	(x < 0 && y > 0) ? printf("2��и��Դϴ�.") : printf("");
	(x < 0 && y < 0) ? printf("3��и��Դϴ�.") : printf("");
	(x > 0 && y < 0) ? printf("4��и��Դϴ�.") : printf("");

	return 0;
}