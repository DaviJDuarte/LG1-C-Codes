// Write a C program that prompts the user to enter a number and then
// displays the multiplication table for that number.

#include <stdio.h>
#include <conio.h>

int main()
{
	int number;

	printf("Enter a number: ");
	scanf("%i", &number);

	for (int i = 0; i < 11; i++)
	{
		printf("%i X %i = %i\n", number, i, number * i);
	}

	getch();
	return 0;
}
