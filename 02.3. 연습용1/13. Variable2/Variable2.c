#include <stdio.h>
int inc(int counter);

int main(void)
{
	int i = 10;
	printf("�Լ� ȣ�� �� : i = %d\n", i);
	inc(i);
	printf("�Լ� ȣ�� �� : i = %d\n", i);
}
int inc(int counter)
{
	return counter++;
}