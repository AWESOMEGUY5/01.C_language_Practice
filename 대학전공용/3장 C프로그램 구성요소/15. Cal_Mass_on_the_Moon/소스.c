#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float Your_mass, Cal_mass;
	printf("�����Ը� �Է��Ͻʽÿ�. : "), scanf("%f", &Your_mass);
	Cal_mass = Your_mass * 0.17;
	printf("�޿����� �����Դ� %.2f kg �Դϴ�.", Cal_mass);
}