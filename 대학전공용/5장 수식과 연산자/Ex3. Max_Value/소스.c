#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int x, y, z, max_value;
	printf("���� 3���� �Է��Ͻÿ�."); scanf("%d %d %d", &x, &y, &z);
	max_value = (x > y) ? x : y, max_value = (max_value > z) ? max_value : z;
	printf("�ִ��� %d�Դϴ�.", max_value);

	return 0;
}