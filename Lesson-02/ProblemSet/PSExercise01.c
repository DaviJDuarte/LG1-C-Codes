// Write a C program that prompts the user to
// input a number. The program should then determine
// whether the entered number is even or odd and
// display the result.

#include <stdio.h>
#include <conio.h>

int main()
{
	int number;

	printf("\nEnter a whole number: ");
	scanf("%i", &number);

	if (number % 2 == 0)
		printf("%i is an even number.\n", number);
	else
		printf("%i is an odd number.\n", number);

	getch();
	return 0;
}