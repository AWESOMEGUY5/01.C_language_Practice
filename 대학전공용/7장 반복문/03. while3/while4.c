#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	//sum = ���� ���� ���� ���, number1 : ���� ��, number2 : ���� ���� �ִ밪
	int sum = 0, number1 = 0, number2 = 1;
	printf("������ �Է��Ͻÿ�. : "), scanf("%d", &number2);

	while (number1 <= number2) {
		sum += number1;
		number1++;
	}
	printf("1���� %d������ ���� %d�Դϴ�.", number2 ,sum);
	return 0;
}