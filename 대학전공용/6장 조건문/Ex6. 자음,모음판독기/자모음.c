#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char input1, n;

	printf("���ڸ� �Է��Ͻÿ�. : "), n = scanf("%c", &input1);

	if (n == 1) {
		
		switch (input1) {
			case 'a': {
				printf("�����Դϴ�.");
				break;
			}
			case 'e': {
				printf("�����Դϴ�.");
				break;
			}
			case 'i': {
				printf("�����Դϴ�.");
				break;
			}
			case 'o': {
				printf("�����Դϴ�.");
				break;
			}
			case 'u': {
				printf("�����Դϴ�.");
				break;
			}
			default: {
				printf("�����Դϴ�.");
				break;
			}
		}
		return 0;
	} else {
		printf("�߸��� �����Դϴ�.");
		return 1;
	}
}