// Write an algorithm that receives an input representing a month (a number
// from 1 to 12) and returns the name of the respective month. Use a "case"
// or "if-else" approach to accomplish this.

#include <stdio.h>
#include <conio.h>

int main()
{
	int month;

	do
	{
		printf("Enter the month number (1-12): ");
		scanf("%i", &month);

		switch (month)
		{
		case 1:
			printf("The month is January.\n");
			break;
		case 2:
			printf("The month is February.\n");
			break;
		case 3:
			printf("The month is March.\n");
			break;
		case 4:
			printf("The month is April.\n");
			break;
		case 5:
			printf("The month is May.\n");
			break;
		case 6:
			printf("The month is June.\n");
			break;
		case 7:
			printf("The month is July.\n");
			break;
		case 8:
			printf("The month is August.\n");
			break;
		case 9:
			printf("The month is September.\n");
			break;
		case 10:
			printf("The month is October.\n");
			break;
		case 11:
			printf("The month is November.\n");
			break;
		case 12:
			printf("The month is December.\n");
			break;

		default:
			printf("Invalid input!\n");
			break;
		}
	} while (month < 1 || month > 12);

	getch();
	return 0;
}
