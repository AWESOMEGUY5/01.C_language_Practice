// �Լ� ������ ������� �ʴ� ����
#include <stdio.h>

// �Լ� ���ǰ� �Լ� ȣ�⺸�� ���� ���� �Լ� ������ �������� �ʾƵ� �ȴ�. 
// �׷��� �Ϲ����� ����� �ƴϴ�.
int cal_sum(int n)
{
	int result = 0;
	for (int i = 1; i <= n; i++) {
		result += i;
	}
	return result;
}

int main(void)
{
	int sum = cal_sum(100);
	printf("sum = %d \n", sum);
}
