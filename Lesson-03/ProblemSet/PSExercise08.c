// Write a C program that prints all even numbers between 1 and 20 using a
// do-while loop.

#include <stdio.h>
#include <conio.h>

int main()
{
	int i = 1;

	do
	{
		if (i % 2 == 0)
			printf("%i\n", i);
		i++;
	} while (i <= 20);

	getch();
	return 0;
}