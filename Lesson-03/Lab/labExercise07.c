// Write a C program to display the powers of 3 ranging from 0 to 15.
// Consider that any number raised to 0 is 1 and raised to 1 is itself.

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	for (int i = 0; i <= 15; i++)
	{
		int power = pow(3, i);
		printf("3 to the power of %i is: %i\n", i, power);
	}

	getch();
	return 0;
}