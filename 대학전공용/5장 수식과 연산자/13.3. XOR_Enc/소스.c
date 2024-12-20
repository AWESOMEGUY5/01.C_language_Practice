#include <stdio.h>

int main(void)
{
	char data = 'a', key = 0Xff, encrpeted_Data, original_Data;

	printf("원래의 문자 = %c\n", data);
	printf("암호화된 문자 = %c\n", encrpeted_Data = data ^ key);
	printf("복원된 문자 = %c\n", original_Data = encrpeted_Data ^ key);

	return 0;
}