#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int First_input = 0, Second_input = 0, sum;
	
	printf("ù ��° ���ڸ� �Է��Ͻÿ�. : "); scanf("%d", &First_input);
	printf("�� ��° ���ڸ� �Է��Ͻÿ�. : "); scanf("%d", &Second_input);

	printf("�� ���� �� : %d", sum = First_input + Second_input);

	return 0;
}