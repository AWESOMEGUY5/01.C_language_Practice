#include <stdio.h>

int main(void)
{
	char fruits[3][20];
	
	for (int i = 0; i < 3; i++) {
		printf("���� �̸��� �Է��Ͻÿ�."), gets(fruits[i]);
	}

	for (int i = 0; i < 3; i++) {
		printf("%d��° ���� : %s\n", i + 1, fruits[i]);
	}
}