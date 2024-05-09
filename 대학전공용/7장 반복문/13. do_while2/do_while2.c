#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int input1 = 0;
	do {
		printf("1--새로 만들기\n");
		printf("2--파일 열기\n");
		printf("3--파일 닫기\n");
		printf("하나를 선택하시오. : "), scanf("%d", &input1);

	} while (input1 < 1 || input1 > 3); 
	printf("선택된 메뉴 : %d\n", input1);	
	return 0;
}