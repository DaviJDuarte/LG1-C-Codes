// Create a program that takes the input of a month (from 1 to 12) and
// returns the name of the respective month. Use switch/case to implement
// the logic.

#include <stdio.h>
#include <conio.h>

int main(void)
{
	int month;

	do
	{
		printf("Enter the month number (1-12): ");
		scanf("%i", &month);

		switch (month)
		{
		case 1:
			printf("It's January!");
			break;
		case 2:
			printf("It's February!");
			break;
		case 3:
			printf("It's March!");
			break;
		case 4:
			printf("It's April!");
			break;
		case 5:
			printf("It's May!");
			break;
		case 6:
			printf("It's June!");
			break;
		case 7:
			printf("It's July!");
			break;
		case 8:
			printf("It's August!");
			break;
		case 9:
			printf("It's September!");
			break;
		case 10:
			printf("It's October!");
			break;
		case 11:
			printf("It's November!");
			break;
		case 12:
			printf("It's December!");
			break;

		default:
			printf("\nThat month does not exist!\n");
		}

	} while (month < 1 || month > 12);

	printf("\nPress any key to exit...\n");

	getch();
	return 0;
}