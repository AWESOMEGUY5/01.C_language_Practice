#include <stdio.h>

// �迭�� ����
int main(void)
{
	int a[5] = { 1,2,3,4,5 }, b[5] = { 0 };
	printf("���� ��\n");
	for(int i = 0; i < 5; i++)
		printf("%d ", a[i]);
	printf("\n");
	for (int i = 0; i < 5; i++) {
		printf("%d ", b[i]);
		b[i] = a[i]; // ���Ҹ� �ϳ��ϳ� �����Ͽ��� �Ѵ�.
	}
	printf("\n���� ��\n");
	for (int i = 0; i < 5; i++)
		printf("%d ", a[i]);
	printf("\n");
	for (int i = 0; i < 5; i++)
		printf("%d ", b[i]);
}