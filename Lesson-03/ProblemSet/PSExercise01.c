// Write a C program that prints the numbers from 1 to 20 using the
// while loop.

#include <stdio.h>
#include <conio.h>

int main()
{
	int i = 0;

	while (i < 20)
	{
		printf("%i\n", i + 1);
		i++;
	}

	getch();
	return 0;
}
