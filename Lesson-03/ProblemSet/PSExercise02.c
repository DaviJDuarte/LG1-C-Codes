// Write a C program that prints all even numbers between 20 and 1 in
// reverse order using the while loop.

#include <stdio.h>
#include <conio.h>

int main()
{
	int i = 20;

	while (i > 0)
	{
		if (i % 2 == 0)
			printf("%i\n", i);
		i--;
	}

	getch();
	return 0;
}