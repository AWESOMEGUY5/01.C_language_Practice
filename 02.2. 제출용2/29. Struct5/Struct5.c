// ����ü �迭

#define _CRT_SECURE_NO_WARNINGS
#define SIZE 3

#include <stdio.h>

struct Student_info
{
	int number;
	char name[10];
	double grade;
};


int main(void)
{
	struct Student_info list[SIZE];

	for (int i = 0; i < SIZE; i++) {
		printf("�й��� �Է��Ͻÿ�. : "), scanf("%d", &list[i].number);
		printf("�̸��� �Է��Ͻÿ�. : "), scanf("%s", &list[i].name);
		printf("������ �Է��Ͻÿ�. : "), scanf("%lf", &list[i].grade);
	}
	for (int i = 0; i < SIZE; i++) {
		printf("�й� : %d, �̸� : %s, ���� : %lf.1\n", list[i].number, list[i].name, list[i].grade);
	}
	return 0;
}