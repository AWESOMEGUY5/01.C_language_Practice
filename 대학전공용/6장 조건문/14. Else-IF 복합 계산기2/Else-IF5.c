#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int input1, input2, result; char oper;

	printf("������ �Է��Ͻÿ�. : "), scanf("%d %c %d", &input1, &oper, &input2);

	if (oper == '+') {
		result = input1 + input2;
	} else if (oper == '-') {
		result = input1 - input2;
	} else if (oper == '*') {
		result = input1 * input2;
	} else if (oper == '/') {
		result = input1 / input2;
	} else if (oper == '%') {
		result = input1 % input2;
	} else if (oper == '&') {
		result = input1 & input2;
	} else if (oper == '|') {
		result= input1 | input2;
	} else if (oper == '^') {
		result = input1 ^ input2;
	} else {
		printf("�������� �ʴ� �������Դϴ�.");
	}
	if (oper == '^' || oper == '&' || oper == '|') {
		printf("%X %c %X = %X", input1, oper, input2, result);
	} else {
		printf("%d %c %d = %d", input1, oper, input2, result);
	}
	

	return 0;
}