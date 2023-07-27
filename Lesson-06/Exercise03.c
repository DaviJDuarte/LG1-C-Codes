// Create a C program to read a 1D array A with 10 elements. Then,
// create a 2D array B with 3 columns, where:

// The first column of matrix B is formed by adding 5 to each element of
// array A.

// The second column of matrix B is formed by calculating the factorial
// of each corresponding element of array A.

// The third column of matrix B is formed by calculating the squares of
// each corresponding element of array A.

// Finally, display the 2D array B.

#include <stdio.h>
#include <conio.h>

int main()
{
	int A[10], B[10][3];

	printf("Array A:\n");
	for (int i = 0; i < 10; i++)
	{
		printf("Enter number %i: ", i + 1);
		scanf("%i", &A[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		B[i][0] = A[i] + 5;

		B[i][1] = 1;

		for (int j = 1; j <= A[i]; j++)
		{
			B[i][1] *= j;
		}

		B[i][2] = A[i] * A[i];
	}

	printf("\nArray A:");
	for (int i = 0; i < 10; i++)
	{
		printf("\n%i + 5 = %i", A[i], B[i][0]);
		printf("\n!%i = %i", A[i], B[i][1]);
		printf("\n%i squared = %i\n", A[i], B[i][2]);
	}

	printf("\nPress any key to exit...\n");
	getch();
	return 0;
}
