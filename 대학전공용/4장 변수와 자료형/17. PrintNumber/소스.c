#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double number1 = 0;

	printf("�Ǽ��� �Է��Ͻʽÿ�. : "); scanf("%lf", &number1);
	printf("�Ǽ��������δ� %.6lf�Դϴ�.\n", number1);
	printf("�����������δ� %e�Դϴ�.\n", number1);

	return 0;
}