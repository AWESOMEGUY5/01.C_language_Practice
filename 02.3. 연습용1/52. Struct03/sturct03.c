#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

struct student
{
	int number;
	char name[10];
	double grade;
}s;

int main(void)
{
	printf_s("학번을 입력하세요 >>> ");
	scanf_s("%d", &s.number);

	printf_s("이름을 입력하세요 >>> ");
	scanf_s("%s", s.name, (unsigned)sizeof(s.name));

	printf_s("학점을 입력하세요 >>> ");
	scanf_s("%lf", &s.grade);

	printf_s("학번 : %08d\n", s.number);
	printf_s("이름 : %s\n", s.name);
	printf_s("학점 : %.1f\n", s.grade);
}