#include <stdio.h>
#include <Windows.h>

void hw_init();

int main(void)
{
	hw_init();
	hw_init();
	hw_init();

	return 0;
}

void hw_init()
{
	static int inited = 0;
	if (inited == 0) {
		printf("�ʱ�ȭ ��... \n");
		Sleep(2000);
		inited = 1;
	} else {
		Sleep(1000);
		printf("�̹� �ʱ�ȭ�� �Ϸ�Ǿ����ϴ�. \n");
	}
}