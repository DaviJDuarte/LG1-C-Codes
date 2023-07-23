// Write a C program to read three values (A, B, and C) and calculate the
// quadratic equation, displaying both roots if it is possible to calculate
// for the given values.

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	float A, B, C;
	float delta, root1, root2;

	printf("Enter the value of A: ");
	scanf("%f", &A);

	printf("Enter the value of B: ");
	scanf("%f", &B);

	printf("Enter the value of C: ");
	scanf("%f", &C);

	delta = B * B - 4 * A * C;

	if (delta >= 0)
	{
		root1 = (-B + sqrt(delta)) / (2 * A);
		root2 = (-B - sqrt(delta)) / (2 * A);

		printf("The roots of the quadratic equation are: %.2f and %.2f\n", root1, root2);
	}
	else
	{
		printf("The quadratic equation does not have real and distinct roots for the given values.\n");
	}

	getch();
	return 0;
}
