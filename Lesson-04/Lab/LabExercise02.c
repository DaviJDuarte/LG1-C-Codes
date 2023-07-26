// Read a vector-type array A with 6 elements. Create an array B of the
// same type, where each element of array B is the factorial of the
// corresponding element of array A. Display array B.

#include <stdio.h>
#include <conio.h>

int calculate_factorial(int number);

int main()
{
	int A[6], B[6];

	for (int i = 0; i < 6; i++)
	{
		printf("Enter the value %i: ", i + 1);
		scanf("%d", &A[i]);
		B[i] = calculate_factorial(A[i]);
	}

	for (int i = 0; i < 6; i++)
	{
		printf("\nFactorial of %i is: %i", A[i], B[i]);
	}

	printf("\n");
	getch();
	return 0;
}

int calculate_factorial(int number)
{
	int factorial = 1;

	for (int i = 1; i <= number; i++)
	{
		factorial *= i;
	}

	return factorial;
}