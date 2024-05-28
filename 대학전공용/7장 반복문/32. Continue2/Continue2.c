#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	while (1) {
		char letter;
		printf("소문자를 입력하시오. : "), scanf(" %c", &letter);

		if (letter < 'a' || letter > 'z') {
			continue;
		} else if (letter == 'Q') {
			break;
		}
		printf("변환된 소문자 : %c\n", letter -= 32);
	}
	return 0;
}