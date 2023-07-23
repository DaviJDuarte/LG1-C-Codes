// Write a C program to display the multiplication table of a given number.

#include <stdio.h>
#include <conio.h>

int main()
{
	int number;

	printf("Enter a number: ");
	scanf("%i", &number);

	for (int i = 1; i <= 10; i++)
	{
		printf("%i x %i = %i\n", number, i, number * i);
	}

	getch();
	return 0;
}
