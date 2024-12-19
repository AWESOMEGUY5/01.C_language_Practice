#include <stdio.h>

struct student
{
	int id;
	char *name;
	float grade;
	struct date* dob;
};

struct date
{
	int year, month, day;
};

int main(void)
{
	struct student s1 = { 202417101, "한장수", 4.0 };
	struct student s2 = { 202417102, "홍길동", 3.8 };

	printf("학번 : %08d, 이름 : %s 학점 : %.2lf\n", s1.id, s1.name, s1.grade);
	printf("학번 : %08d, 이름 : %s 학점 : %.2lf\n", s2.id, s2.name, s2.grade);
}