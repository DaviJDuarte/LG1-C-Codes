// Read two vector-type arrays A with 20 elements and B with 30 elements.
// Create an array C, which is the combination of the two other matrices.
// Thus, C should have the capacity to store 50 elements.

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

	printf("\nArray C:\n");
	for (int i = 0; i < 50; i++)
	{
		printf("\nNumber %i: %i", i + 1, C[i]);
	}

	printf("\n");
	getch();
	return 0;
}
