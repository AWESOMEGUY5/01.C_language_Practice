#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int score;
	printf("������ �Է��Ͻÿ�. : "), scanf("%d", &score);

	if (score >= 80)
	{
		if (score >= 90)
			printf("A�����Դϴ�. \n");
	}
	else
	{
		printf("A�����̳� B������ �ƴմϴ�.");
	}
}
