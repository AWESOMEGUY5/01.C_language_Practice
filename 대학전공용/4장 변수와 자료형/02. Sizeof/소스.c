#include <stdio.h>

int main(void)
{
	int x = 0;

	printf("변수 X의 크기 : %d\n", sizeof(x));
	printf("char형의 크기 : %d\n", sizeof(char));
	printf("int형의 크기 : %d\n", sizeof(int));
	printf("short형의 크기 : %d\n", sizeof(short)); 
	printf("long 형의 크기 : %d\n", sizeof(long));
	printf("long long의 크기 : %d\n", sizeof(long long));
	printf("float형의 크기 : %d\n", sizeof(float));
	printf("double형의 크기 : %d\n", sizeof(double));


}