#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int num1, num2, temp, n;

	printf("�� ������ �Է��Ͻÿ�. : "), n = scanf("%d %d", &num1, &num2);
	if (n == 2 && num1 != 0) {
		while (num2 != 0) {
			temp = num1 % num2;
			num1 = num2;
			num2 = temp;
		}
		printf("�ִ������� %d�Դϴ�.", num1);
		return 0;
	} else {
		printf("�߸��� �����Դϴ�.");
		return 1;
	}
	
}