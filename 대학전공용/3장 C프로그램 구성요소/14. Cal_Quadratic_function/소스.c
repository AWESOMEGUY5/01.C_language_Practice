#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	float Num = 0, Ans = 0;
	printf("�Ǽ��� �Է��Ͻʽÿ�. : "), scanf("%f", &Num);
	
	Ans = 3.0 * pow(2, Num) + 7.0 * Num + 11;
	printf("���׽��� ���� %.2f", Ans);
}