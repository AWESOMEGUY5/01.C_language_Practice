#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int distance; double angle;
	printf("�Ÿ��� �Է��Ͻʽÿ�. : "), scanf("%d", &distance);
	printf("������ �Է��Ͻʽÿ�. : "), scanf("%lf", &angle);
	printf("������ �������� %.2lf�Դϴ�.", distance * (360 / angle) / (2 * 3.14));
}