// Write a C program that converts an amount in Dollars
// to Reais based on a fixed exchange rate. The program
// should prompt the user to enter an amount in Dollars
// and then calculate the equivalent amount in Reais
// using a fixed exchange rate of 1 USD = 4.80 BRL.
// Display the converted amount.

#include <stdio.h>
#include <conio.h>

int main()
{
	float dollars, reais;

	printf("Enter the amount in Dollars for conversion: ");
	scanf("%f", &dollars);

	reais = dollars * 4.80;

	printf("The amount converted to Reais is: R$%.2f\n", reais);
	getch();

	return 0;
}