#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int input1, input2;

	printf("���ڿ� �и� �Է��Ͻÿ�. : "), scanf("%d %d", &input1, &input2);
	
	if (input2 != 0) {
		printf("����� %d�Դϴ�.", input1 / input2);
		return 0;
	} else {
		printf("0���� ���� �� �����ϴ�.");
		return 1;
	}
}