#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int math_test()
{	
	// ������ ����
	printf("���� ���� : %d %ld\n", abs(-18840), labs(-451215153));
	// �Ǽ��� ����
	printf("�Ǽ� ���� : %g\n", fabs(-3.67));

	// �ŵ�����
	printf("�ŵ����� : %g\n", pow(2.0, 4.0));
	// ������
	printf("������ : %g\n", sqrt(16.0));

	// �ø�
	printf("�ø� : %g %g\n", ceil(-2.4), ceil(7.1));
	// ����
	printf("���� : %g %g\n", floor(-2.4), floor(7.1));
	// �ݿø�
	printf("�ݿø� : %g %g\n", round(-2.4), round(7.6));
}

int main(void)
{
	math_test();
}