// Write a C program that calculates the cost of
// raising rabbits based on the quantity of rabbits
// owned.The program should prompt the user to enter
// the number of rabbits.Calculate the cost using the
// provided formula and display the result in dollars
// with two decimal places.

// Cost = (Number of Rabbits * $0.70) / 18 + $10

#include <stdio.h>
#include <conio.h>

int main()
{
	int number_of_rabbits;
	float cost;

	printf("Enter the number of rabbits: ");
	scanf("%d", &number_of_rabbits);

	cost = number_of_rabbits * 0.70 / 18 + 10;

	printf("With %d rabbits, the cost will be: $%.2f", number_of_rabbits, cost);

	getch();
	return 0;
}
