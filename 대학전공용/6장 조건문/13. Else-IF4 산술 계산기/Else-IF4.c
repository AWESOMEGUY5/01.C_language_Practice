#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int input1, input2; char oper;

	printf("������ �Է��Ͻÿ�. : "), scanf("%d %c %d", &input1, &oper, &input2);

	if (oper == '+') {
		printf("%d %c %d = %d", input1, oper, input2, input1 + input2);
	} else if (oper == '-') {
		printf("%d %c %d = %d", input1, oper, input2, input1 - input2);
	} else if (oper == '*') {
		printf("%d %c %d = %d", input1, oper, input2, input1 * input2);
	} else if (oper == '/') {
		printf("%d %c %d = %d", input1, oper, input2, input1 / input2);
	} else if (oper == '%') {
		printf("%d %c %d = %d", input1, oper, input2, input1 % input2);
	} else {
		printf("�������� �ʴ� �������Դϴ�.");
	}

	return 0;
}