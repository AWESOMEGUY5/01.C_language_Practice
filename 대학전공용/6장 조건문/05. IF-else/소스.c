#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
int main(void)
{
	int number;
	printf("������ �Է��Ͻÿ�. : "), scanf("%d", &number);

	if (number / 2 == 0) {
		printf("¦���Դϴ�.");
	} else {
		printf("Ȧ���Դϴ�.");
	}

	return 0;
}