#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int input;

	printf("숫자를 입력하시오. : "), scanf("%d", &input);

	switch (input) {
	case 0: {
		printf("없음\n");
		break;
	}
	case 1: {
		printf("하나\n");
		break;
	}
	case 2: {
		printf("둘\n");
		break;
	}
	case 3: {
		printf("셋\n");
		break;
	}
	default:
		printf("셋을 초과");
		break;
	}

	return 0;
}