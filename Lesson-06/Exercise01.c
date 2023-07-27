// Create a C program to read two 2D arrays, A and B, each with 5 rows and
// 3 columns. Then, create another 2D array C of the same dimension, where
// each element of C is the sum of the corresponding elements from arrays A
// and B. Finally, display the matrix C.

#include <stdio.h>
#include <conio.h>

void get_numbers(int (*array)[3], int rows, int columns);

int main()
{
	int A[5][3], B[5][3], C[5][3];

	printf("Array A:\n");
	get_numbers(A, 5, 3);

	printf("\nArray B:\n");
	get_numbers(B, 5, 3);

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
		}
	}

	printf("\nArray C:");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("\n%i + %i = %i", A[i][j], B[i][j], C[i][j]);
		}
	}

	printf("\nPress any key to exit...\n");
	getch();
	return 0;
}

void get_numbers(int (*array)[3], int rows, int columns)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			printf("Enter number Line %i Column %i: ", i + 1, j + 1);
			scanf("%i", &array[i][j]);
		}
	}
}
