// Write a C program that prints the numbers from 20 to 1 and
// identifies whether each number is odd or even using the for loop.

#include <stdio.h>
#include <conio.h>

int main()
{
	for (int i = 20; i > 0; i--)
	{
		if (i % 2 == 0)
			printf("%i is even\n", i);
		else
			printf("%i is odd\n", i);
	}

	getch();
	return 0;
}