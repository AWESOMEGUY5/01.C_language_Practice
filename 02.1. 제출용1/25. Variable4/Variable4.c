#include <stdio.h>

int A, B, counter; // ���� ������ 0���� �ʱ�ȭ�ȴ�.
int add()
{
	printf("answer : %d\n", counter);
	return A + B;
}
int main(void)
{
	A = 5, B = 7;
	int answer = add();
	printf("%d + %d = %d", A, B, answer);

	return 0;
}