#include <stdio.h>

int main(void)
{
	printf("<���� ���� ������1>\n");
	int a = 10, b = 10, c = 33, d = 100, e = 25;

	a += 1; b -= c; a *= a, d /= 25, e %= 5;
	printf("a += 10: %d \nb -= c: %d \na *= a: %d \nd /= 25: %d \ne %%= 5: %d\n\n", a, b, c, d, e);
	
	a = 1, b = 3, c = 1, d = 2, e = 1;
	printf("<���� ���� ������2>\n"); // & : and, | : or, ^ : nor
	printf("1 &= 3: %d \n1 |= 2: %d \n1 ^= 2: %d\n\n", a &= a, b |= c, d ^= e);
	
	a = 2, b = 8;
	printf("<���� ���� ������3>\n"); // <<= : nĭ��ŭ �������� ����Ʈ, >>= : nĭ��ŭ ���������� ����Ʈ
	printf("f <<= i : %d\nd >>= f : %d ", a <<= 2, b >>= 1);

}