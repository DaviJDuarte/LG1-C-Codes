// Write a C program to read an integer value, whether positive or
// negative, and display the absolute value of the number. In other words,
// the program should output the magnitude of the provided number. Make
// sure to check if the number provided is less than zero; if so, multiply
// it by -1.

#include <stdio.h>
#include <conio.h>

int main()
{
	int number;

	printf("Enter an integer number: ");
	scanf("%d", &number);

	if (number < 0)
	{
		number *= -1;
	}

	printf("The absolute value of the number is: %d\n", number);

	getch();
	return 0;
}
