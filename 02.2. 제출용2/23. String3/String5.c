#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[80] = { 0 }, s2[90] = { 0 };
	char result;

	printf("ù��° �ܾ �Է��Ͻÿ�. : "), gets(s1);
	printf("�ι�° �ܾ �Է��Ͻÿ�. : "), gets(s2);
	result = strcmp(s1, s2); printf("%d\n", result);
	if (result < 0) {
		printf("%s�� %s���� �տ� �ֽ��ϴ�.", s1, s2);
	} else if (result > 0) {
		printf("%s�� %s���� �ڿ� �ֽ��ϴ�.", s1, s2);
	} else {
		printf("%s�� %s���� �����ϴ�.", s1, s2);
	}
}