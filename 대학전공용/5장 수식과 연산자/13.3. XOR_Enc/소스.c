#include <stdio.h>

int main(void)
{
	char data = 'a', key = 0Xff, encrpeted_Data, original_Data;

	printf("������ ���� = %c\n", data);
	printf("��ȣȭ�� ���� = %c\n", encrpeted_Data = data ^ key);
	printf("������ ���� = %c\n", original_Data = encrpeted_Data ^ key);

	return 0;
}