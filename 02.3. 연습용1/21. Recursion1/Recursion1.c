#include <stdio.h>

unsigned factorial(unsigned repeatNum);

int main(void)
{
	unsigned repeatNum;
	printf("������ �Է��Ͻÿ�. : "), scanf_s("%u", &repeatNum);
	printf("%d!�� %d�Դϴ�.", repeatNum, factorial(repeatNum));
}

unsigned factorial(unsigned repeatNum)
{
	printf("factorial(%d)\n", repeatNum);
	if (repeatNum <= 1) 
		return 1;
	else 
		return repeatNum * factorial(repeatNum - 1);
}