#include <stdio.h>

void sub()
{
	static int scount = 0;	// ���� ���� ���� : ���� �� �� �ѹ��� �ʱ�ȭ ��.
	int account = 0;		// ���� �ڵ� ���� : �Լ� ȣ�� �� �Ź� �ٽ� �ʱ�ȭ��.

	printf("scount = %d, acount = %d\n", scount, account);

	scount++, account++;
}

int main(void)
{
	for (int i = 0; i < 3; i++) {
		sub();
	}
	return 0;
}