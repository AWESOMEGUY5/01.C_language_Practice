#include <stdio.h>
#include <math.h>

int main(void)
{
	//������
	int sum = 100;
	printf("%d \n", sum);

	//�Ǽ���
	double Float = 3.141592;
	printf("%f \n", Float);

	//������
	char text = 'a';
	printf("%c \n", text);

	//�ʵ����� ���е�
	printf("%10d\n", 123);
	printf("%-10d\n", 123);

	//�߰����� 1 - %f
	//�߰����� 2
	int k = 10;
	printf("%d", k);

	return 0;
}