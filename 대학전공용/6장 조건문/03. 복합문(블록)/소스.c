#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int score;

	printf("������ �Է��Ͻÿ�. : "), scanf("%d", &score);
	if (score >= 90) {
		printf("�հ��Դϴ�."); 
		printf("�бݵ� ���� �� �ֽ��ϴ�.");
	} 
	return 0;
}
