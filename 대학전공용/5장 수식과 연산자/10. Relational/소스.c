#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	printf("������ ���� �ǵ���\n");
	int math, language;
	printf("������ �Է��Ͻÿ� : "); scanf("%d %d", &math, &language);
	
	if (math >= 60 && language >= 60) 
	{
		printf("pass\n");
	}
	else
	{
		printf("not pass\n");
	}
	
	printf("��ɻ���� ���� �ǵ���"); 
	printf("������ �Է��Ͻÿ� : "); scanf("%d %d", &math, &language);
	if (math >= 60 || language >= 60)
	{
		printf("pass\n");
	}
	else
	{
		printf("not pass\n");
	}

	printf("1�� ����");
	return 0;
}