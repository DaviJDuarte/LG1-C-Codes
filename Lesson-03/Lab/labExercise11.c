// Write a C program that reads 5 integer numbers from the user and
// identifies the largest and smallest values among them, displaying the
// results.

#include <stdio.h>
#include <conio.h>

int main()
{
	int biggest = 0, smallest = 0;

	for (int i = 0; i < 5; i++)
	{
		int number;
		printf("Enter number %i: ", i + 1);
		scanf("%d", &number);

		if (number > biggest)
			biggest = number;
		if (number < smallest || smallest == 0)
			smallest = number;
	}

	printf("The smallest number is: %i\n", smallest);
	printf("The biggest number is: %i\n", biggest);

	getch();
	return 0;
}