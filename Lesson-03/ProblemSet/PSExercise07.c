// Write a C program that prints the numbers from 1 to 20 using a do-while loop.

#include <stdio.h>
#include <conio.h>

int main()
{
	int i = 1;

	do
	{
		printf("%i\n", i);
		i++;
	} while (i <= 20);

	getch();
	return 0;
}
