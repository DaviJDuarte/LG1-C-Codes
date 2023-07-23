// Write a C program that calculates the square of a
// given number. The program should prompt the user to
// enter an integer number, calculate the square, and
// then display the result.

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	int number;

	printf("Enter a number: ");
	scanf("%d", &number);

	int square = pow(number, 2);

	printf("The square of this number is: %d\n", square);

	getch();
	return 0;
}