// Write a C program to receive input from the user for
// variables "a" and "b". Then, swap the values of "a"
// and "b" using a third variable "c".

#include <stdio.h>
#include <conio.h>

int main()
{
	int A, B, C;

	printf("Enter the value of A: ");
	scanf("%d", &A);

	printf("Enter the value of B: ");
	scanf("%d", &B);

	C = A;
	A = B;
	B = C;

	printf("\nThe value of A is: %d\nThe value of B is: %d", A, B);

	getch();
	return 0;
}
