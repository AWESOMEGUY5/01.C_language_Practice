#include <stdio.h>

struct student
{
	int number;
	char name[10];
	double score;
}s1;

int main(void)
{
	s1.number = 1;
	strcpy(s1.name, "한장수");
	s1.score = 4.0;

	printf("학번 : %08d\n", s1.number);
	printf("이름 : %s\n", s1.name);
	printf("학점 : %.1f", s1.score);
}