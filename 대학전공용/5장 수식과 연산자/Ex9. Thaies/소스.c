#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{	
	double height1, height2, width1, width2;
	printf("������ ���̸� �Է��Ͻÿ�. : "); scanf("%lf", &height1);
	printf("������ �׸����� ���̸� �Է��Ͻÿ�. : "); scanf("%lf", &width1);
	printf("�Ƕ�̵������ �Ÿ��� �Է��Ͻÿ�. : "); scanf("%lf", &width2);
	printf("�Ƕ�̵��� ���̴� %.2lf�Դϴ�.", height2 = height1 * width2 / width1);
}