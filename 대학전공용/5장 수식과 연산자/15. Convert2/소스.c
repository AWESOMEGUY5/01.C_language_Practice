#include <stdio.h>

int main(void)// ����ȯ�� �켱���� : int < unsigned int < long < unsigned long < float < double(���� ����)
{
	int a = 30; float b = 5; 
	printf("%f\n", a / b); // int�� float������ ��ȯ

	printf("%lf\n", (double)a / b); // int�� ����ȯ �����ڿ� ���� ���� ��ȯ�ǰ� double������ ��ȯ �� �����

	printf("%lf\n", b / 2); // �ǿ����� �� �ϳ��� double���̹Ƿ� 2�� double������ ��ȯ

	printf("%lf\n", (double)5 / (double)2); // ���� ������

	printf("%d\n",a = 4.9 + 1.3);// ������ ����� 6.2�� �ǳ� ������ ���� a�� ��ȯ�Ǹ� ������ȯ�� �߻��Ͽ� 6�� ����ȴ�.

	printf("%d\n", a = (int)4.9 + (int)1.3);// ����ȯ �����ڰ� ���� �켱������ ���⿡ ����ȯ�� �̷���� 4, 1�� �Ǿ��� 5�� a�� �Ҵ�ȴ�.

	return 0;
}