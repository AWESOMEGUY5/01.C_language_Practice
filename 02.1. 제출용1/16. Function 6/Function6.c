#include <stdio.h>

// �Լ� ����, C/ C++�� �Լ� ������ �� �ʿ��ϴ�.
// C�� main ���� ����Ǳ� ������ ���߿� ����� c_to_f�Լ��� �𸥴�.
// �׷��Ƿ� �Լ� ������ ����Ͽ� �̸� �޸𸮿� ���縦 �� �д�.
double c_to_f(double c_temp);

double main(void)
{
	printf("���� %g���� ȭ�� %g�� �Դϴ�. \n", 36.0, c_to_f(36.0));
	return 0;
}

double c_to_f(double c_temp)
{
	return 9.0 / 5.0 * c_temp + 32;
}