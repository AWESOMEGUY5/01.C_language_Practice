// �� ���� �Է¹޾� ����� �����ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double num1 = 0, num2 = 0, num3 = 0, sum = 0, avg = 0;

	printf("�� ���� �Է��Ͻʽÿ�. : "); scanf("%lf %lf %lf", &num1, &num2, &num3);

	sum = num1 + num2 + num3; avg = sum / 3;
	printf("�հ� : %.2lf \n��� : %.2lf", sum, avg);
}