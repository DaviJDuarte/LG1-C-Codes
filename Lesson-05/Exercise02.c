// Create a C program to read 8 elements into an array A. Then, create
// another array B of the same size, where each element is the corresponding
// element from array A multiplied by 5. Display the elements of array B in
// ascending order. Implement a routine to search for elements stored in
// array B.

#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
	int A[8], B[8];

	for (int i = 0; i < 8; i++)
	{
		printf("Enter number %i: ", i + 1);
		scanf("%i", &A[i]);
		B[i] = A[i] * 5;
	}

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (B[i] < B[j])
			{
				int temp = B[i];
				B[i] = B[j];
				B[j] = temp;
			}
		}
	}

	printf("\nNumbers in ascending order:");
	for (int i = 0; i < 8; i++)
	{
		printf("\nNumber %i: %i", i + 1, B[i]);
	}

	int search;
	char answer;
	bool found = false;

	do
	{
		found = false;

		printf("\nEnter a number for searching: ");
		scanf("%i", &search);

		for (int i = 0; i < 8; i++)
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