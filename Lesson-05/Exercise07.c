// Create a C program to read 20 elements into an array A. Then, create
// another array B of the same size, with each element of B being the
// corresponding element from array A increased by 2. Sort the elements of
// array B in ascending order. Implement a search routine to search for
// elements stored in array B.

#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
	int A[20], B[20];

	for (int i = 0; i < 20; i++)
	{
		printf("Enter number %i: ", i + 1);
		scanf("%i", &A[i]);
		B[i] = A[i] + 2;
	}

	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			if (B[i] < B[j])
			{
				int temp = B[i];
				B[i] = B[j];
				B[j] = temp;
			}
		}
	}

	int search;
	char answer;
	bool found = false;

	do
	{
		found = false;

		printf("\nEnter a number for searching: ");
		scanf("%i", &search);

		for (int i = 0; i < 20; i++)
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