// �Լ� ����

#include <stdio.h>

// �Լ� ���� : �����Ϸ����� �Լ��� ���Ͽ� �̸� �˸��� ��
double c_to_f(double c_temp);

int main(void)
{
	double cel;
	printf("��ȯ�� �µ��� �Է��Ͻÿ�. (����:����) : "), scanf_s("%lf", &cel);
	printf("���� %g���� ȭ�� %g�� �Դϴ�.", cel, c_to_f(cel));
}

double c_to_f(double c_temp)
{
	return 9.0 / 5.0 * c_temp + 32;
}