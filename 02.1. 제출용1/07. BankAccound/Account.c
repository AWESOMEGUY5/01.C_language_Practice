#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void account(int account)
{
	static int balance = 0;
	if (account >= 0) {
		printf("\t\t%d\t\t    ", account);
	} else {
		printf("\t\t\t%d\t    ", -account);
	}
	balance += account;
	printf("%d\n", balance);
}
int main(void)
{
	printf("=============================================\n");
	printf("�Աݾ�\t\t�Ա�\t���\t    �ܰ�\n");
	printf("---------------------------------------------\n");
	
	while (1) {
		int input;
		
		if (scanf("%d", &input) == 1) {
			account(input);
		} else {

			while (getchar() != '\n');
			
			printf("\t\t---�߸��� ����---\n");
			
		}
	}
	printf("=============================================\n");

	return 0;


	
}