#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double Width = 0, Height = 0, Area = 0, Perimeter = 0;

	printf("���簢���� ���ο� ������ ���̸� �Է��Ͻÿ�.(���� : cm) : "); scanf("%lf %lf", &Width, &Height);
	Perimeter = 2 * (Width + Height); Area = Width * Height;
	printf("���簢���� �ѷ� : %.2lf \n", Perimeter);
	printf("���簢���� ���� : %.2lf \n", Area);
}
