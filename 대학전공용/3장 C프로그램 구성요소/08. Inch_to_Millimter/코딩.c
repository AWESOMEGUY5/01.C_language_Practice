#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //��.��� ���̺귯��

int main(void)
{
	double Inch = 0, Millimeter = 0;
	printf("��ġ ������ �Է� : "); scanf("%lf", &Inch);

	Millimeter = Inch * 25.4;
	printf("%.3lf inch = %.3lfmm", Inch, Millimeter);
	return 0;
}