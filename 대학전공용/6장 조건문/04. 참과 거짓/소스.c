#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int x;
	printf("���ڸ� �Է��Ͻÿ�. : "), scanf("%d", &x);

	if (x) {
		printf("x�� 0�� �ƴմϴ�.");
	} else if(!x)
	{
		printf("x�� 0�Դϴ�.");
	}
	return 0;
	/*
	* ���� ������ ���̴� 0�� �ƴѰ� 0�ΰ��� �Ǻ��ϴ� ���Դϴ�.
	*/
}