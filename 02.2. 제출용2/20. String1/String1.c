#include <stdio.h>
void print()
{
	char str1[4] = { 'a','b','c','\0' };
	char str2[4] = "abc";
	// ����, ���� �ڿ��� ������ NULL ���ڰ� �־�� ��., \0
	char str3[4] = "abcd"; 
	char str4[6] = "abcd";
	char str5[4] = "";
	char str6[] = "abc";

	printf("str1 :%s \nstr2 :%s \nstr3 :%s \n", str1, str2, str3);
	printf("str4 :%s \nstr5 :%s \nstr6 :%s \n", str4, str5, str6);
}
int main(void)
{
	print();
}