#define SIZE 5

#include <stdio.h>

int main(void)
{
	int a[SIZE] = { 1,2,3,4,5 };
	int b[SIZE] = { 1,2,3,4,5 };

	for (int i = 0; i < SIZE; i++) {
		if (a[i] == b[i]) printf("[%d], a�� b�� ���� �����ϴ�. \n", i);
		else printf("[%d], a�� b�� ���� �ٸ��ϴ�. \n", i);
	}
	return 0;
}