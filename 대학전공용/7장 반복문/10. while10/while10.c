#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int gems, hours, n;

	printf("������ ���� ����� �ð��� �Է��Ͻÿ�. : "), n = scanf("%d %d", &gems, &hours);

	if (n == 2) {
		int i = 0;
		while (i < hours) {
			gems *= 4;
			i++;
		}
		printf("%d�ð� ��� �� ������ %d�����Դϴ�.", hours, gems);
		return 0;
	} else {
		printf("�������� �����Դϴ�.");
	}
}