// Write a C program to read three integer numbers and display the numbers
// that are divisible by both 2 and 3.

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	int number1, number2, number3;

	printf("Enter the first number: ");
	scanf("%d", &number1);

	printf("Enter the second number: ");
	scanf("%d", &number2);

	printf("Enter the third number: ");
	scanf("%d", &number3);

	if (number1 % 2 == 0 && number1 % 3 == 0)
		printf("\n%d is divisible by 2 and 3.", number1);

	if (number2 % 2 == 0 && number2 % 3 == 0)
		printf("\n%d is divisible by 2 and 3.", number2);

	if (number3 % 2 == 0 && number3 % 3 == 0)
		printf("\n%d is divisible by 2 and 3.", number3);

	getch();
	return 0;
}