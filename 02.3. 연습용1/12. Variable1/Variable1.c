#include <stdio.h>


int main(void)
{
	// temp�� ������ : for�� �� ���η� 
	for (int i = 0; i < 5; i++) {
		int temp = 1; 
		// ���� ������ �ʱ�ȭ�Ͽ��� �ϸ� �ʱ�ȭ�� �ȵ� ��� �����Ⱚ�� ���Ѵ�.
		printf("temp : %d\n", temp);
		temp++;
	}
	return 0;
}