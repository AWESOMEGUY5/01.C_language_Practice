#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	while (1) {
		char letter;
		printf("�ҹ��ڸ� �Է��Ͻÿ�. : "), scanf(" %c", &letter);

		if (letter < 'a' || letter > 'z') {
			continue;
		} else if (letter == 'Q') {
			break;
		}
		printf("��ȯ�� �ҹ��� : %c\n", letter -= 32);
	}
	return 0;
}