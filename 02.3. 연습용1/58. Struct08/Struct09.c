#include <stdio.h>

struct info
{
	int id;
	char name[10];
	float grade;
};

int main(void)
{
	struct info s = { 25, "kim", 4.1 };
	struct info* p = &s;

	printf("나이 : %08d 이름: %s 학점: %.2f\n", (*p).id, (*p).name, (*p).grade);
	printf("나이 : %08d 이름: %s 학점: %.2f\n", p->id, p->name, p->grade);
	printf("나이 : %08d 이름: %s 학점: %.2f\n", s.id, s.name, s.grade);

	return 0;
}