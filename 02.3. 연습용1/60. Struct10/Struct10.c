#include <stdio.h>

struct date
{
	int month, day, year;
};

struct student
{
	int id;
	char name[10];
	double grade;
	struct date* dob;
};

int main(void)
{
	struct date d = { 3, 20, 2000 };
	struct student s = { 1, "kim", 4.1 };

	s.dob = &d;

	printf("학번 : %d \n이름 : %s \n학점 : %.2lf\n", s.id, s.name, s.grade);
	printf("생년월일 : %d년 %02d월 %02d일", s.dob->year, s.dob->month, s.dob->day);
}