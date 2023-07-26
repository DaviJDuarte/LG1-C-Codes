// Read 5 elements into a vector-type array A. Create an array B of the
// same dimension with the elements of array A multiplied by 3. Display
// array B. Element B[0] should be equal to element A[0] * 3, element B[1]
// should be equal to element A[1] * 3, and so on, until element B[4] which
// should be equal to element A[4] * 3.

#include <stdio.h>
#include <conio.h>

int main(void)
{
	int A[5], B[5];

	int i;

	for (i = 0; i < 5; i++)
	{
		printf("Enter number %i: ", i + 1);
		scanf("%i", &A[i]);
		B[i] = A[i] * 3;
	}

	for (i = 0; i < 5; i++)
		printf("\n%i times 3 equals: %i", A[i], B[i]);

	printf("\n");
	getch();
	return 0;
}