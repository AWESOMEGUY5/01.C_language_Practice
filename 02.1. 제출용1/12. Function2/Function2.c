#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//���ʺ��� ����������, ��ȯ�� �Լ��̸�(�Ű�����1, �Ű�����2){}
int max(int x, int y)
{
	if (x > y) {
		return x;
	} else {
		return y;
	}
}

int main(void)
{
	int a, b, n, larger;

	printf("���� 2���� �Է��Ͻʽÿ�. : "), n = scanf("%d %d", &a, &b);
	if (n == 2) {
		larger = max(a, b);
		printf("�� ū ���� %d�Դϴ�.\n", larger);
		return 0;
	} else {
		printf("�߸��� �����Դϴ�.");
		return 1;
	}

	
}