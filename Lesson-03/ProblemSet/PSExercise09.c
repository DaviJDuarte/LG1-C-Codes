// Write a C program that prints the numbers from 1 to 20 and identifies
// whether each number is odd or even using the do-while loop.

#include <stdio.h>
#include <conio.h>

int main()
{
	int i = 1;

	do
	{
		if (i % 2 == 1)
			printf("%i is odd\n", i);
		else
			printf("%i is even\n", i);
		i++;
	} while (i <= 20);

	getch();
	return 0;
}
