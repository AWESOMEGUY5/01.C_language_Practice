#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int Number = 0; float Score = 0;
	printf("��ȣ�� ������ �Է��Ͻʽÿ�. "); 
	scanf("%d %f", &Number, &Score);

	printf("%d %.2f", Number, Score);
}