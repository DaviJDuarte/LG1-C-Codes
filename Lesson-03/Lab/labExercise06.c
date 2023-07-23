// Write a C program to display the squares of integers in the range
// of 15 to 200.

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	for (int i = 15; i <= 200; i++)
	{
		int square = pow(i, 2);
		printf("The square of %i is: %i\n", i, square);
	}

	getch();
	return 0;
}