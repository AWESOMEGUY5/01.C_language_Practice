#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int input1 = 0;
	do {
		printf("1--���� �����\n");
		printf("2--���� ����\n");
		printf("3--���� �ݱ�\n");
		printf("�ϳ��� �����Ͻÿ�. : "), scanf("%d", &input1);

	} while (input1 < 1 || input1 > 3); 
	printf("���õ� �޴� : %d\n", input1);	
	return 0;
}