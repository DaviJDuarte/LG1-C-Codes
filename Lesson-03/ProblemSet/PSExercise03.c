// Write a C program that prints the numbers from 1 to 20 and
// identifies whether each number is odd or even using the while loop.

#include <stdio.h>
#include <conio.h>

int main()
{
	int i = 1;

	while (i <= 20)
	{
		if (i % 2 == 1)
			printf("%i is odd\n", i);
		else
			printf("%i is even\n", i);
		i++;
	}

	getch();
	return 0;
}
