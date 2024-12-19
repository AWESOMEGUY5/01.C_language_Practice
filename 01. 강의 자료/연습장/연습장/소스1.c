#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

union exapmle {
	char input1;
	int input2;
	double input3;
} s1;

int main(void) {
	s1.input1 = 10;
}