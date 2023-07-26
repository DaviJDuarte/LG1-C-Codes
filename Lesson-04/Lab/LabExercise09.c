// Create a program that takes the input of an access code. If the code is
// 1, 2, 3, 4, or 5, display "Engineering," "Construction," "Electrical
// Systems," "Tourism," or "Systems Analysis," respectively. Otherwise,
// display "Invalid access code." Use switch/case to implement the logic.

#include <stdio.h>
#include <conio.h>

int main(void)
{
	int id;

	do
	{
		printf("Enter the course ID: ");
		scanf("%i", &id);

		switch (id)
		{
		case 1:
			printf("Engineering.");
			break;
		case 2:
			printf("Construction.");
			break;
		case 3:
			printf("Electrical Systems.");
			break;
		case 4:
			printf("Tourism.");
			break;
		case 5:
			printf("System Analysis.");
			break;
		default:
			printf("\nThat course does not exist!\n");
		}

	} while (id < 1 || id > 5);

	printf("\nPress any key to exit...\n");

	getch();
	return 0;
}