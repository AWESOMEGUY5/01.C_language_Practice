#include <stdio.h>

int x = 50;
int main(void)
{
	int x = 100;
	{
		extern int x;	// �����Ϸ��� ����� ������ �ڵ带 �켱 Ž���Ͽ� �����ϳ�
						// extern�� ����ϸ� �ܺ� ������ ����Ѵ�.
		printf("x = %d \n", x);
	}
	return 0;
}