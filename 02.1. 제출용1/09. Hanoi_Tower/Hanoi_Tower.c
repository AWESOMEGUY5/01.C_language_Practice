#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// n���� ������ �ӽ� ���� tmp�� ����Ͽ� from���� to�� �̵�
void hanoi_tower(int n, char from, char tmp, char to)
{
	if (n == 1)
		printf("���� 1: %c => %c\n", from, to);
	else {
		hanoi_tower(n - 1, from, to, tmp);
		printf("���� %d: %c => %c\n", n, from, to);
		hanoi_tower(n - 1, tmp, from, to);
	}
}

int main(void)
{	
	int a;
	printf("������ ������ �Է��Ͻÿ�.(5���Ϸ� �Է��� ��.) : "), scanf("%d", &a);
	hanoi_tower(a, 'A', 'B', 'C');
	return 0;
}
