#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main(void)
{
	int input1, computer;

	printf("(1. ���� 2. ���� 3. ��)�� �ϳ��� �����Ͻÿ�. : "), scanf("%d", &input1);
	
	srand(time(NULL)); 
	computer = rand() % 3 + 1;
	
	if (input1 == 1)
		printf("����ڴ� ������ �����߽��ϴ�.\n");
	else if (input1 == 2)
		printf("����ڴ� ������ �����߽��ϴ�.\n");
	else if (input1 == 3)
		printf("����ڴ� ���� �����߽��ϴ�.\n");

	if (computer == 1)
		printf("��ǻ�ʹ� ������ �����߽��ϴ�.\n");
	else if (computer == 2)
		printf("��ǻ�ʹ� ������ �����߽��ϴ�.\n");
	else if (computer == 3)
		printf("��ǻ�ʹ� ���� �����߽��ϴ�.\n");

	// 1. ����, 2. ����, 3. ��
	// ����ڰ� ������ ���� ��
	if (input1 == 1) {
		if (computer == 1)
			printf("�����ϴ�.");
		else if (computer == 2) 
			printf("��ǻ�Ͱ� �̰���ϴ�");
		else if (computer == 3) 
			printf("����ڰ� �̰���ϴ�");
	}
	//����ڰ� ������ ���� ��
	else if (input1 == 2) {
		if (computer == 1)
			printf("����ڰ� �̰���ϴ�.");
		else if (computer == 2)
			printf("�����ϴ�.");
		else if (computer == 3)
			printf("��ǻ�Ͱ� �̰���ϴ�.");
	}
	//����ڰ� ���� ���� ��
	else if (input1 == 3) {
		if (computer == 1)
			printf("��ǻ�Ͱ� �̰���ϴ�.");
		else if (computer == 2)
			printf("����ڰ� �̰���ϴ�.");
		else if (computer == 3)
			printf("�����ϴ�.");
	}
	return 0;
}