#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int x, y, n;

	printf("x, y��ǥ�� �Է��Ͻÿ�. : "), n = scanf("%d %d", &x, &y);
	
	if (n == 2) {
		if (x > 0 && y > 0) {
			printf("1��и�");
		} else if (x < 0 && y > 0) {
			printf("2��и�");
		} else if (x < 0 && y < 0) {
			printf("3��и�");
		} else {
			printf("4��и�");
		}
	} else {
		printf("�߸��� �����Դϴ�.");
		return 1;
	}
	return 0;
}