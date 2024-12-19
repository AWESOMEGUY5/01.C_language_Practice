#define _CRT_SECURE_NO_WARNINGS
#define SIZE 7

#include <stdio.h>
#include <math.h>

void square_array(int a[], int size);
void print_array(const int a[], int size);

int main(void)
{
	int list[SIZE] = { 1,2,3,4,5,6,7 };

	print_array(list, SIZE);

	square_array(list, SIZE);
	print_array(list, SIZE);

	return 0;
}

void square_array(int a[], int size)
{
	for (int  i = 0; i < size; i++) {
		a[i] = pow(a[i], 2);
	}
}

void print_array(const int a[], int size)
{
	for (int i = 0; i < size; i++) {
		printf("%3d ", a[i]);
	}
	printf("\n");
}