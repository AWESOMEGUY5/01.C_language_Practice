#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void)
{
	printf("���� : %g\n", fabs(-3.67));
	printf("�ŵ����� : %g\n", pow(2, 5));
	printf("������ : %g\n", sqrt(16.0));
	printf("�ø� : -2.5 -> %g | 1.2 -> %g\n", ceil(-2.5), ceil(1.2));
	printf("���� : -2.5 -> %g | 1.2 -> %g\n", floor(-2.5), floor(1.2));
	printf("�ݿø� : -2.5 -> %g | 1.2 -> %g\n", round(-2.5), round(1.2));

	printf("�Ҽ��� ���� ���� : %d\n", (int)2.9);

	printf("<������ ����> \n-9 : %d | -900L : %ld\n", abs(-9), labs(-900L));
}