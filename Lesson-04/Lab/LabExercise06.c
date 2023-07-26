// Read 8 elements into a vector-type array A. Create an array B of the
// same type, following the following rule: "Every element of B should be
// the square of the corresponding element of A."

#include <stdio.h>
#include <conio.h>

int main()
{
	int A[8], B[8];

	for (int i = 0; i < 8; i++)
	{
		printf("Enter number %i: ", i + 1);
		scanf("%d", &A[i]);
		B[i] = A[i] * A[i];
	}

	printf("\n");

	for (int i = 0; i < 8; i++)
	{
		printf("\n%i squared is: %i", A[i], B[i]);
	}

	printf("\n\nPress any key to exit...\n");
	getch();
	return 0;
}
