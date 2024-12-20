#include <stdio.h>
#include <limits.h>

int main(void)
{
	printf("short형의 크기 : %d\n", sizeof(short));
	short Year = 10;
	
	printf("int형의 크기 : %d\n", sizeof(int));
	int Sale = 200000000;

	printf("long형의 크기 : %d\n", sizeof(long));
	long total_sale = Year * Sale;
	
	printf("long long형의 크기 : %d\n", sizeof(long long));
	long long large_value = LLONG_MAX;
	
	printf("total_sale : %d\n", total_sale);

	return 0;
}