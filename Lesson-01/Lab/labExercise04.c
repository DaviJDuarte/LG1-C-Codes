// Write a C program that swaps the values of two
// variables (A and B). The program should prompt the
// user to enter integer values for A and B, and then
// display theie updated values.

#include <stdio.h>
#include <conio.h>

int main()
{
	int A, B, C;

	printf("Enter A: ");
	scanf("%d", &A);

	printf("Enter B: ");
	scanf("%d", &B);

	C = A;
	A = B;
	B = C;

	printf("\nA is now: %d\nB is now: %d\n", A, B);

	getch();
	return 0;
}