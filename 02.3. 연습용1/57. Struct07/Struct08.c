#include <stdio.h>

struct student
{
	int number;
	char name[20];
	double grade;
};

int main(void)
{
	struct student list[] = {
		{202417101, "한장수", 4.12},
		{202417102, "홍길동", 3.89},
		{202417103, "홍길순", 3.65}
	};
	int n = sizeof(list) / sizeof(list[0]);

	for (int i = 0; i < n; i++)
		printf("학번 : %08d 이름 : %s 학점 : %.2lf\n", list[i].number, list[i].name, list[i].grade);
}