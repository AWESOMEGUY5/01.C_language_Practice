#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <math.h>

int main(void)
{
	//���� ���� ���ϱ�
	float radius = 0, Square = 0;
	printf("���� ���̸� ���մϴ�. �������� �Է��Ͻÿ�. : "); scanf("%f", &radius);
	
	printf("���� ���� : %.3f\n", Square = pow(radius, 2) * 3.141592);

	//���� �ѷ� ���ϱ�
	float Perimeter = 0;
	printf("���� �ѷ��� ���մϴ�. �������� �Է��Ͻÿ�. : "); scanf("%f", &radius);

	printf("���� �ѷ� : %.3f\n", Perimeter = 2 * radius * 3.141592);
}
