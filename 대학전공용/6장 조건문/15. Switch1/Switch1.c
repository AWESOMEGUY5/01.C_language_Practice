#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int input;

	printf("���ڸ� �Է��Ͻÿ�. : "), scanf("%d", &input);

	switch (input) {
	case 0: {
		printf("����\n");
		break;
	}
	case 1: {
		printf("�ϳ�\n");
		break;
	}
	case 2: {
		printf("��\n");
		break;
	}
	case 3: {
		printf("��\n");
		break;
	}
	default:
		printf("���� �ʰ�");
		break;
	}

	return 0;
}