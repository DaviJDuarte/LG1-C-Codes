// Create a C program to read 15 elements into an array A. Then, create
// another array B of the same size, where each element is the factorial of
// the corresponding element from array A. Display the elements of array B
// in ascending order.

#include <stdio.h>
#include <conio.h>

int main()
{
	int A[15], B[15] = {0};

	for (int i = 0; i < 15; i++)
	{
		printf("Enter number %i: ", i + 1);
		scanf("%i", &A[i]);

		B[i] = 1;

		for (int j = 1; j <= A[i]; j++)
		{
			B[i] *= j;
		}
	}

	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			if (B[i] < B[j])
			{
				int temp = B[i];
				B[i] = B[j];
				B[j] = temp;
			}
		}
	}

	printf("\nNumbers in ascending order:");
	for (int i = 0; i < 15; i++)
	{
		printf("\nNumber %i: %i", i + 1, B[i]);
	}

	printf("\nPress any key to exit...\n");
	getch();
	return 0;
}