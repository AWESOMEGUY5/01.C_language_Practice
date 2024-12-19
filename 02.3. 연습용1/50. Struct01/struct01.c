#include <stdio.h>

struct student
{
	int number;
	char name[10];
	double score;
}s1;

struct point
{
	int x, y;
}point;

struct complex
{
	double real, imng;
}com1;

struct date
{
	int month, day, year;
}date1;

struct rectangle
{
	int x, y, width, height;
};

int main(void)
{
	struct student s1 = { 1, "한장수", 4.0 };
	printf_s("%08d %s %.1f", s1.number, s1.name, s1.score);
}