#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char input1, n;

	printf("문자를 입력하시오. : "), n = scanf("%c", &input1);

	if (n == 1) {
		
		switch (input1) {
			case 'a': {
				printf("모음입니다.");
				break;
			}
			case 'e': {
				printf("모음입니다.");
				break;
			}
			case 'i': {
				printf("모음입니다.");
				break;
			}
			case 'o': {
				printf("모음입니다.");
				break;
			}
			case 'u': {
				printf("모음입니다.");
				break;
			}
			default: {
				printf("자음입니다.");
				break;
			}
		}
		return 0;
	} else {
		printf("잘못된 형식입니다.");
		return 1;
	}
}