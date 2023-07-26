// Read two vector-type arrays A and B, each with 5 elements. Create an
// array C, where each element of C is the subtraction of the corresponding
// element of A with B. Display array C.

#include <stdio.h>
#include <conio.h>

int main(void)
{
	int A[5], B[5], C[5];

	printf("Enter 5 numbers for array A:\n");
	for (int i = 0; i < 5; i++)
	{
		printf("Number %i: ", i + 1);
		scanf("%i", &A[i]);
	}

	printf("\nEnter 5 numbers for array B:\n");
	for (int i = 0; i < 5; i++)
	{
		printf("Number %i: ", i + 1);
		scanf("%i", &B[i]);
	}

	for (int i = 0; i < 5; i++)
	{
		C[i] = A[i] - B[i];
		printf("\n%i - %i = %i", A[i], B[i], C[i]);
	}

	printf("\n");
	getch();
	return 0;
}