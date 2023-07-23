// Write a C program to read three values (A, B, and C) and display the
// values in ascending order.

#include <stdio.h>
#include <conio.h>

int main()
{
	float A, B, C;

	printf("Enter the value of A: ");
	scanf("%f", &A);

	printf("Enter the value of B: ");
	scanf("%f", &B);

	printf("Enter the value of C: ");
	scanf("%f", &C);

	float temp;
	if (A > B)
	{
		temp = A;
		A = B;
		B = temp;
	}
	if (A > C)
	{
		temp = A;
		A = C;
		C = temp;
	}
	if (B > C)
	{
		temp = B;
		B = C;
		C = temp;
	}

	printf("Values in ascending order: %.2f, %.2f, %.2f\n", A, B, C);

	return 0;
}
