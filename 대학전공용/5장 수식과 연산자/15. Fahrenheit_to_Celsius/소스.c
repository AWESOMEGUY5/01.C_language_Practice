#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double F_temp, C_temp;

	printf("��ȯ�� ������ �Է��Ͻÿ�. : "); scanf("%lf", &F_temp);
	printf("ȭ�� : %gF -> ���� : %gC", F_temp, C_temp = 5.0 / 9.0 * (F_temp - 32));
}
