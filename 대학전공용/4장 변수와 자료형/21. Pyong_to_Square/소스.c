#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	const double Pyong = 3.3; double Square_meter, Squae_pyong;

	printf("��ȯ�� ����� �Է��Ͻÿ�. : "); scanf("%lf", &Squae_pyong);
	Square_meter = Squae_pyong / Pyong;

	printf("%.3lf���� %.3lf���������Դϴ�.", Squae_pyong, Square_meter);

	return 0;
}