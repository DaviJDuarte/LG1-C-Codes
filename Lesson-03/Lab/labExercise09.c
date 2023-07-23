// Write a C program that calculates and displays the value of a base
// raised to an exponent, i.e., N raised to M.

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	int base, exponent;

	printf("Enter the base: ");
	scanf("%d", &base);

	printf("Enter the exponent: ");
	scanf("%d", &exponent);

	int power = pow(base, exponent);

	printf("%i to the power of %i is: %i", base, exponent, power);

	getch();
	return 0;
}