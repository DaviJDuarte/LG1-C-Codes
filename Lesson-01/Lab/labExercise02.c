// Write a C program that converts a temperature from
// Fahrenheit to Celsius. The program should prompt the
// user to enter the temperature in Fahrenheit, perform
// the conversion, and then display the result in
// Celsius with two decimal places.

#include <stdio.h>
#include <conio.h>

int main()
{
	float fahrenheit, celsius;

	printf("Enter the temperature in Fahrenheit: ");
	scanf("%f", &fahrenheit);

	celsius = (((fahrenheit - 32) * 5) / 9);

	printf("%.2fF is equal to %.2fC.\n", fahrenheit, celsius);

	getch();
	return 0;
}