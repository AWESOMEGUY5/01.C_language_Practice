#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main(void)
{
	double width, length, height, Cubic;
	printf("������ ����, ����, ���̸� �ѹ��� �Է��Ͻÿ�. : "); scanf("%lf %lf %lf", &width, &length, &height);
	
	Cubic = width * length * height;
	printf("������ ���Ǵ� %.3lfm^3�Դϴ�.", Cubic);
}
