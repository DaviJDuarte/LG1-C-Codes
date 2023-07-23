// Write a C program to read three integer numbers and display the numbers
// that are divisible by 4 or 5.

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	int number1, number2;

	printf("Enter the first number: ");
	scanf("%d", &number1);

	printf("Enter the second number: ");
	scanf("%d", &number2);

	if (number1 % 4 == 0 || number1 % 5 == 0)
		printf("\n%d is divisible by 4 or 5.", number1);

	if (number2 % 4 == 0 || number2 % 5 == 0)
		printf("\n%d is divisible by 4 or 5.", number2);

	getch();
	return 0;
}