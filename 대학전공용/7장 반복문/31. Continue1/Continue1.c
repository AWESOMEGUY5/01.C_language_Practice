#include <stdio.h>

int main(void)
{
	for (int a = 0; a < 10; a++) {
		if (a % 3 == 0) {
			continue; // �ش� ������ �����ϰ� ���� �ݺ����� ������.
		}
		printf("%d ", a);
	}
}