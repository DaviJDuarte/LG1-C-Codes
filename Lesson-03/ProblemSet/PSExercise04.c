// Write a C program that prints the numbers from 20 to 1 in reverse
// order using the for loop.

#include <stdio.h>
#include <conio.h>

int main()
{
	for (int i = 20; i > 0; i--)
		printf("%i\n", i);

	getch();
	return 0;
}