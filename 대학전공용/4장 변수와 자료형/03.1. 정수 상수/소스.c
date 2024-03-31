#include <stdio.h>
#include <limits.h>

int main(void)
{
	short D = SHRT_MIN; short E = SHRT_MAX; printf("short의 범위 %d ~ %u\n", D, E);
	unsigned short F = USHRT_MAX; printf("Unsigned short의 범위 0 ~ %u\n\n", F);

	int A = INT_MIN; int B = INT_MAX;  printf("int의 범위 %d ~ %u\n", A, B);
	unsigned int C = UINT_MAX;  printf("Unsigned int의 범위 0 ~ %u\n\n", C);

	long G = LONG_MIN; long H = LONG_MAX;  printf("long의 범위 %d ~ %u\n", G, H);
	unsigned long I = ULONG_MAX; printf("Unsigned long의 범위 0 ~ %u\n\n", I);

	long long J = LLONG_MIN; long long K = LLONG_MAX; printf("long long의 범위 %lld ~ %llu\n", J, K);
	unsigned long long L = ULLONG_MAX; 	printf("Unsigned long long의 범위 0 ~ %llu\n", L); 
	//short, int, long은 %d, unsinged short, int, long은 %u를 사용한다.
	//long long은 %lld, unsigned long long은 %llu를 사용하여 표현한다.

}