#include <stdio.h>
#include <limits.h>

int main(void)
{
	short D = SHRT_MIN; short E = SHRT_MAX; printf("short�� ���� %d ~ %u\n", D, E);
	unsigned short F = USHRT_MAX; printf("Unsigned short�� ���� 0 ~ %u\n\n", F);

	int A = INT_MIN; int B = INT_MAX;  printf("int�� ���� %d ~ %u\n", A, B);
	unsigned int C = UINT_MAX;  printf("Unsigned int�� ���� 0 ~ %u\n\n", C);

	long G = LONG_MIN; long H = LONG_MAX;  printf("long�� ���� %d ~ %u\n", G, H);
	unsigned long I = ULONG_MAX; printf("Unsigned long�� ���� 0 ~ %u\n\n", I);

	long long J = LLONG_MIN; long long K = LLONG_MAX; printf("long long�� ���� %lld ~ %llu\n", J, K);
	unsigned long long L = ULLONG_MAX; 	printf("Unsigned long long�� ���� 0 ~ %llu\n", L); 
	//short, int, long�� %d, unsinged short, int, long�� %u�� ����Ѵ�.
	//long long�� %lld, unsigned long long�� %llu�� ����Ͽ� ǥ���Ѵ�.

}