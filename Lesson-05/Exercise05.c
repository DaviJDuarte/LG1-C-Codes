// Create a C program to read 20 elements into an array A and 30 elements
// into another array B. Then, create a new array C, which is the
// combination of both arrays A and B. Matrix C should have the capacity to
// store 50 elements. Finally, display the elements of array C in
// descending order.

#include <stdio.h>
#include <conio.h>

int main()
{
	int A[20], B[30], C[50];

	printf("Array A:\n");
	for (int i = 0; i < 20; i++)
	{
		printf("Enter number %i: ", i + 1);
		scanf("%i", &A[i]);
	}

	printf("\nArray B:\n");
	for (int i = 0; i < 30; i++)
	{
		printf("Enter number %i: ", i + 1);
		scanf("%i", &B[i]);
	}

	for (int i = 0; i < 20; i++)
	{
		C[i] = A[i];
	}

	for (int i = 0; i < 30; i++)
	{
		C[i + 20] = B[i];
	}

	for (int i = 0; i < 50; i++)
	{
		for (int j = i + 1; j < 50; j++)
		{
			if (C[i] < C[j])
			{
				int temp = C[i];
				C[i] = C[j];
				C[j] = temp;
			}
		}
	}

	printf("\nArray C:\n");
	for (int i = 0; i < 50; i++)
	{
		printf("\nNumber %i: %i", i + 1, C[i]);
	}

	printf("\nPress any key to exit...\n");
	getch();
	return 0;
}