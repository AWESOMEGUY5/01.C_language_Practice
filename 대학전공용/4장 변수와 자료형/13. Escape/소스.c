#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int id, pass;

	printf("���̵�� �н����带 �װ��� ���ڷ� �Է��ϼ��� :----\b\b\b\b"); scanf("%d", &id);
	printf("password : ----\b\b\b\b"); scanf("%d", &pass);
	printf("\a�Էµ� ���̵�� \"%d\"�̰� �н������ \"%d\"�Դϴ�.\n", id, pass);
}