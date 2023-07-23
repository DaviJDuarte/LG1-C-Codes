// Write a C program that converts an amount in Reais
// to Dollars based on a fixed exchange rate. The
// program should prompt the user to enter an amount in
// Reais and then calculate the equivalent amount in
// Dollars using a fixed exchange rate of 1 USD = 4.80
// BRL. Display the converted amount.

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	float reais, dollars;

	printf("Enter the amount in Reais for conversion: ");
	scanf("%f", &reais);

	dollars = reais / 4.80;

	printf("The amount converted to dollars is: US$%.2f\n", dollars);

	getch();
	return 0;
}