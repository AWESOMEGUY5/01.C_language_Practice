#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int year;

	printf("������ �Է��Ͻÿ�. : "), scanf("%d", &year);

	if (year == 0)
	{
		printf("0���� ���� �� �����ϴ�.");
		return 1;
	}
	
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) 
		printf("%d���� �����Դϴ�. \n", year);
	else 
		printf("%d���� ������ �ƴմϴ�.", year);

	return 0;
}