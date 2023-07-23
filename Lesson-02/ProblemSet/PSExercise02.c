// Write a Python program that prompts the user to input an integer number
// between 0 and 100. The program should then determine the distance
// between the entered number and a predefined key number loaded in the
// program. The distance should always be a positive number.

#include <stdio.h>
#include <conio.h>
#define KEY 22

int get_number(void);

int main(void)
{
	int number;

	do
	{
		number = get_number();

		int difference = number - KEY;

		if (number != KEY)
		{
			if (difference < 0)
				difference = -difference;
			printf("The distance between %d and the key is: %d\n\n", number, difference);
		}
	} while (number != KEY);

	printf("You got it! The key is: %d\n", KEY);

	getch();
	return 0;
}

int get_number(void)
{
	int number;
	do
	{
		printf("Enter a whole number between 1 and 100: ");
		scanf("%i", &number);
	} while (number < 0 || number > 100);

	return number;
}