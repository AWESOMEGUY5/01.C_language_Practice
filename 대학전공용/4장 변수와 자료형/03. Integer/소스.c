#include <stdio.h>
#include <limits.h>

int main(void)
{
	printf("short���� ũ�� : %d\n", sizeof(short));
	short Year = 10;
	
	printf("int���� ũ�� : %d\n", sizeof(int));
	int Sale = 200000000;

	printf("long���� ũ�� : %d\n", sizeof(long));
	long total_sale = Year * Sale;
	
	printf("long long���� ũ�� : %d\n", sizeof(long long));
	long long large_value = LLONG_MAX;
	
	printf("total_sale : %d\n", total_sale);

	return 0;
}