#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	unsigned int input1, computer, n;

	printf("���ǹ�ȣ�� �Է��Ͻÿ�.(0 ~ 99����) : "), n = scanf("%d", &input1);

	srand(time(NULL));
	computer = rand() % 99 + 1;

	if (n == 1 && input1 <= 99) {
		unsigned int digit1, digit2, inputdigit1,inputdigit2;
		digit1 = computer / 10; 
		digit2 = computer % 10;
		inputdigit1 = input1 / 10;
		inputdigit2 = input1 % 10;
		printf("��÷��ȣ�� %d�Դϴ�.\n", computer);
		if (digit1 == inputdigit1 && digit2 == inputdigit2) {
			printf("��� �鸸���� �޾ҽ��ϴ�!\n");
		} else if (digit1 == inputdigit1 || digit2 == inputdigit2) {
			printf("��� ���ʸ����� �޾ҽ��ϴ�!\n");
		} else {
			printf("����� �����ϴ�.\n");
		}
		return 0;
	} else {
		printf("�߸��� �����Դϴ�.\n");
		return 1;
	}
}