// Read 10 elements into a vector-type array A. Create an array B of the
// same size, containing the same elements as A, but in reversed order.
// That means the 1st element of A becomes the last element of B, the 2nd
// element of A becomes the second-to-last element of B, and so on.

#include <stdio.h>
#include <conio.h>

int main()
{
	int A[10], B[10];

	printf("Array A:\n");

	for (int i = 0; i < 10; i++)
	{
		printf("Enter number %i: ", i + 1);
		scanf("%i", &A[i]);
	}

	int j = 9;

	for (int i = 0; i < 10; i++)
	{
		B[j] = A[i];
		j--;
	}

	printf("\nArray B:\n");
	for (int i = 0; i < 10; i++)
	{
		printf("\nNumber %i: %i", i + 1, B[i]);
	}

	printf("\nPress any key to exit...\n");
	getch();
	return 0;
}
