#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main(void)
{
	int input1, computer;

	printf("(1. 가위 2. 바위 3. 보)중 하나를 선택하시오. : "), scanf("%d", &input1);
	
	srand(time(NULL)); 
	computer = rand() % 3 + 1;
	
	if (input1 == 1)
		printf("사용자는 가위를 선택했습니다.\n");
	else if (input1 == 2)
		printf("사용자는 바위를 선택했습니다.\n");
	else if (input1 == 3)
		printf("사용자는 보를 선택했습니다.\n");

	if (computer == 1)
		printf("컴퓨터는 가위를 선택했습니다.\n");
	else if (computer == 2)
		printf("컴퓨터는 바위를 선택했습니다.\n");
	else if (computer == 3)
		printf("컴퓨터는 보를 선택했습니다.\n");

	// 1. 가위, 2. 바위, 3. 보
	// 사용자가 가위를 냈을 때
	if (input1 == 1) {
		if (computer == 1)
			printf("비겼습니다.");
		else if (computer == 2) 
			printf("컴퓨터가 이겼습니다");
		else if (computer == 3) 
			printf("사용자가 이겼습니다");
	}
	//사용자가 바위를 냈을 때
	else if (input1 == 2) {
		if (computer == 1)
			printf("사용자가 이겼습니다.");
		else if (computer == 2)
			printf("비겼습니다.");
		else if (computer == 3)
			printf("컴퓨터가 이겼습니다.");
	}
	//사용자가 보를 냈을 때
	else if (input1 == 3) {
		if (computer == 1)
			printf("컴퓨터가 이겼습니다.");
		else if (computer == 2)
			printf("사용자가 이겼습니다.");
		else if (computer == 3)
			printf("비겼습니다.");
	}
	return 0;
}