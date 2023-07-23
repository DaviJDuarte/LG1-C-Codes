// Write a C program that reads three numbers from the user and
// displays the following information:

// a) The largest number among the three.
// b) The number in the middle (neither the largest nor the smallest).
// c) The smallest number among the three.

#include <stdio.h>
#include <conio.h>

int main()
{
	int A, B, C, temp;

	printf("Enter A: ");
	scanf("%i", &A);

	printf("Enter B: ");
	scanf("%i", &B);

	printf("Enter C: ");
	scanf("%i", &C);

	if (A > C)
	{
		temp = C;
		C = A;
		A = temp;
	}

	if (A > B)
	{
		temp = B;
		B = A;
		A = temp;
	}

	if (B > C)
	{
		temp = C;
		C = B;
		B = temp;
	}

	printf("The smallest number is: %i\n", A);
	printf("The middle number is: %i\n", B);
	printf("The biggest number is: %i\n", C);

	getch();
	return 0;
}