#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char Figure; unsigned char a;

	printf("���ڸ� �Է��Ͻÿ�. : "), a = scanf("%c", &Figure);
	
	if (a == 1) {
		if (Figure == 'R' || Figure == 'r') {
			printf("Rectangle");
		} else if (Figure == 'T' || Figure == 't') {
			printf("Triangle");
		} else if (Figure == 'C' || Figure == 'c') {
			printf("Circle");
		} else {
			printf("Unknown");
		}
		return 0;
	} else {
		printf("�߸��� �����Դϴ�.");
		return 1;
	}
}