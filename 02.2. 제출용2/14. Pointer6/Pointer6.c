#include <stdio.h>

void pointer1()
{
	//int* p;								// p(�ּ�) : ���� ����     *p(����) : ���� ����
	//const int* p;							// p(�ּ�) : ���� ����     *p(����) : ���� �Ұ���
	int n = 0; const int* p1 = &n;			// p(�ּ�) : ���� �Ұ���   *p(����) : ���� ����
	const int* m = 0; const int* p2 = &m;	// p(�ּ�) : ���� �Ұ���   *p(����) : ���� �Ұ���
}

void sum_mul(int num1, int num2, int *psum, int *pmul)
{
	*psum = num1 + num2;
	*pmul = num1 * num2;
}

int main(void)
{
	int sum, mul;
	sum_mul(10, 20, &sum, &mul);
	printf("�� : %d, �� : %d", sum, mul);

	return 0;
}