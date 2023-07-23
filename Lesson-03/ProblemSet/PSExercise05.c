// Write a C program that prints all odd numbers between 1 and 20
// using the for loop.

#include <stdio.h>
#include <conio.h>

int main()
{
	for (int i = 1; i <= 20; i++)
	{
		if (i % 2 == 1)
			printf("%i\n", i);
	}

	getch();
	return 0;
}