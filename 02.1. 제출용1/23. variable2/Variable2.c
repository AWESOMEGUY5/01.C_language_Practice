#include <stdio.h>

void idc(int counter);

 int main(void)
{
	int i = 10;
	printf("�Լ� ȣ�� �� : i = %d\n", i);
	idc(i);
	printf("�Լ� ȣ�� �� : i = %d\n", i);
	return 0;
}

void idc(int counter)
{
	counter++;
}