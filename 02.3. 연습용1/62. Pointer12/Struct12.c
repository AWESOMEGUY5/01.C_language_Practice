#include <stdio.h>

struct student
{
	int id;
	char name[10];
	float grade;
};

void equal(struct student s1, struct student s2)
{
	if (s1.id == s2.id) {
		printf("같은 학생입니다.");
	} else {
		printf("다른 학생입니다.");
	}
}

int main(void)
{
	struct student s1 = { 202417101, "한장수", 3.89 };
	struct student s2 = { 202417102, "김구글", 3.56 };

	equal(s1, s2);
}