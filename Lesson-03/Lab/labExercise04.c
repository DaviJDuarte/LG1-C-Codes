// Write a C program that reads any number N, where N is less than or
// equal to 50, and display the value obtained from successive
// multiplication of N by 3 while the product is less than 250 (N * 3, N *
// 3 * 3, N * 3 * 3 * 3, etc.).

#include <stdio.h>
#include <conio.h>

int get_number(void);

int main()
{
	int number = get_number();
	int counter = 0;

	while (number < 250)
	{
		number *= 3;
		counter++;
	}

	printf("The number had to be multiplied by three %i times to become greater than 250. It became: %i\n", counter, number);
}

int get_number(void)
{
	int number;
	do
	{
		printf("Enter a number between 1 and 50: ");
		scanf("%i", &number);

		if (number < 1 || number > 50)
			printf("Invalid Input!\n");
	} while (number < 1 || number > 50);
}