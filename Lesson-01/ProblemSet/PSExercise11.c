// (CHALLENGE) Write a C program to receive input from
// the user for variables "A" and "B". Then, swap the
// contents of variables "A" and "B" without using a
// third variable.

#include <stdio.h>
#include <conio.h>

int main()
{
	int A, B;

	printf("Enter the value of A: ");
	scanf("%d", &A);

	printf("Enter the value of B: ");
	scanf("%d", &B);

	A = A + B;
	B = A - B;
	A = A - B;

	printf("\nThe new value of A is: %d\nThe new value of B is: %d", A, B);

	getch();
	return 0;
}
