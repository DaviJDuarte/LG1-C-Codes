// Read two vector-type arrays A and B, each with 5 elements. Create an
// array C, which is the combination of the two other matrices. Thus, C
// should have twice the number of elements, i.e., 10 elements. Display
// array C.

#include <stdio.h>
#include <conio.h>

int main()
{
	int A[5], B[5], C[10];

	printf("Array A:\n");
	for (int i = 0; i < 5; i++)
	{
		printf("Enter number %i: ", i + 1);
		scanf("%i", &A[i]);
	}

	printf("\nArray B:\n");
	for (int i = 0; i < 5; i++)
	{
		printf("Enter number %i: ", i + 1);
		scanf("%i", &B[i]);
	}

	printf("\n");

	for (int i = 0; i < 5; i++)
	{
		C[i] = A[i];
		C[i + 5] = B[i];
	}

	printf("\nArray C: ");
	for (int i = 0; i < 10; i++)
	{
		printf("\nNumber %i: %i", i + 1, C[i]);
	}

	printf("\n");
	getch();
	return 0;
}
