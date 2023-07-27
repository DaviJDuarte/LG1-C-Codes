// Create a C program to read 30 elements into an array A. Then, create
// another array B of the same size, following the rule that each element
// of B should be the cube of the corresponding element from array A.
// Implement a search routine to search for elements stored in array B.

#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>

int main()
{
	int A[30], B[30];

	for (int i = 0; i < 30; i++)
	{
		printf("Enter number %i: ", i + 1);
		scanf("%i", &A[i]);
		B[i] = pow(A[i], 3);
	}

	int search;
	char answer;
	bool found = false;

	do
	{
		found = false;

		printf("\nEnter a number for searching: ");
		scanf("%i", &search);

		for (int i = 0; i < 30; i++)
		{
			if (search == B[i])
			{
				printf("\n%i found at index %i", search, i);
				found = true;
			}
		}

		if (!found)
		{
			printf("\nNumber not found.");
		}

		printf("\nWould you like to keep searching? [Y/N]: ");
		scanf(" %c", &answer);
	} while (toupper(answer) == 'Y');

	printf("\nPress any key to exit...\n");
	getch();
	return 0;
}