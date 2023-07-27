// Create a C program to read two 1D arrays, A and B, each with 4 elements.
// Then, create a 2D array C with 2 columns, where:

// The first column of matrix C should be formed by multiplying each
// element of array A by 2.

// The second column of matrix C should be formed by subtracting 5 from
// each element of array B.

// Finally, display the 2D array C.

#include <conio.h>
#include <stdio.h>

void get_numbers(int *array, int size);

int main()
{
	int A[4], B[4], C[4][2];

	printf("Array A:\n");
	get_numbers(A, 4);

	printf("\nArray B:\n");
	get_numbers(B, 4);

	for (int i = 0; i < 4; i++)
	{
		C[i][0] = A[i] * 2;
		C[i][1] = B[i] - 5;
	}

	printf("\nArray C:");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("\nColumn %i Row %i: %i", i + 1, j + 1, C[j][i]);
		}
	}

	printf("\nPress any key to exit:\n");
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