#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

struct student
{
	int number;
	char name[10];
	double grade;
};

int main(void)
{
	struct student s;

	printf("�й��� �Է��Ͻÿ�. : "), scanf("%d", &s.number);
	printf("�̸��� �Է��Ͻÿ�. : "), scanf("%s", &s.name);
	printf("������ �Է��Ͻÿ�. : "), scanf("%lf", &s.grade);

	printf("\n�й� : %d\n", s.number);
	printf("�̸� : %s\n", s.name);
	printf("\n���� : %g\n", s.grade);

	return 0;
}