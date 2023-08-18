#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void read_array(int* arr[]);
void merge(int *A[], int *B[], int *C[]);
void display_array(int *arr[]);

int main(void)
{
	int *A[30], *B[30], *C[60];

	printf("Array A:\n");
	read_array(A);

	printf("\nArray B:\n");
	read_array(B);
	
	merge(A, B, C);

	printf("\nArray B:");
	display_array(C);

	for (int i = 0; i < 30; i++)
	{
		free(A[i]);
		free(B[i]);
		free(C[i]);
		free(C[i + 30]);
	}

	printf("\nPress any key to exit...");
	getch();
	return 0;
}

void read_array(int* arr[])
{
	for (int i = 0; i < 30; i++)
	{
		arr[i] = (int*)malloc(sizeof(int));
		printf("Enter element %i: ", i + 1);
		scanf("%i", arr[i]);
	}
	return;
}



void merge(int* A[], int* B[], int* C[])
{
	for (int i = 0; i < 30; i++)
	{
		C[i] = (int*)malloc(sizeof(int));
		C[i + 30] = (int*)malloc(sizeof(int));

		*C[i] = *A[i];
		*C[i + 30] = *B[i];
	}
	return;
}

void display_array(int* arr[])
{
	for (int i = 0; i < 60; i++)
	{
		printf("\nElement %i: %i", i + 1, *arr[i]);
	}
}