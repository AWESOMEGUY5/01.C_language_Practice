//������ ��� ������ �����ϴ� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int ���� = 0, ���� = 0, ��ȸ = 0, ���� = 0, ���� = 0, ���_���� = 0;
	printf("���� ���� : ", scanf("%d",&����));
	printf("���� ���� : ", scanf("%d", &����));
	printf("��ȸ ���� : ", scanf("%d", &��ȸ));
	printf("���� ���� : ", scanf("%d", &����));
	printf("���� ���� : ", scanf("%d", &����));

	���_���� = ���� + ���� + ��ȸ + ���� + ���� / 5;
	printf("��� ���� : %d",���_����);

	return 0;
}