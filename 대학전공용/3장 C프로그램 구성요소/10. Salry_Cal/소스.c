#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double Salry = 0, Year = 0;
	printf("�� �� ������ �Է��Ͻÿ�. (����:����) : "); scanf("%lf", &Salry);
	Year = 100000 / Salry;
	
	printf("10���� �����µ� �ɸ��� �ð�(���� : ��) : %f", Year);
	
	return 0;
}