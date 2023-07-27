// Create a C program to read two 1D arrays, A and B, each with 7 elements.
// Then, create another 2D array C, where the first column should be formed
// by the elements of array A, and the second column should be formed by
// the elements of array B. Finally, display the 2D array C.

#include <stdio.h>
#include <conio.h>

void get_numbers(int *array, int size);
void populate_C(int (*C)[2], int array[], int rows, int column);

int main()
{
	int A[7], B[7], C[7][2];

	printf("Array A:\n");
	get_numbers(A, 7);

	printf("Array B:\n");
	get_numbers(B, 7);

	populate_C(C, A, 7, 0);
	populate_C(C, B, 7, 1);

	printf("\nArray C:");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			printf("\nRow %i Column %i: %i", j + 1, i + 1, C[j][i]);
		}
	}

	printf("\nPress any key to exit...\n");
	getch();
	return 0;
}

void get_numbers(int *array, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("Enter number %i: ", i + 1);
		scanf("%i", &array[i]);
	}
}

void populate_C(int (*C)[2], int array[], int rows, int column)
{
	for (int i = 0; i < rows; i++)
	{
		C[i][column] = array[i];
	}
}