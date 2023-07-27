// Create a C program that uses a one - dimensional array(1D array) to store
// the grades of 40 students.Capture these grades from the user, then sort
// them in ascending order.Finally, perform a search operation to find a
// specific grade in the sorted array.

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main()
{
	int A[40];

	for (int i = 0; i < 40; i++)
	{
		printf("Enter the grade for student %i: ", i + 1);
		scanf("%i", &A[i]);
	}

	for (int i = 0; i < 40; i++)
	{
		for (int j = 0; j < 40; j++)
		{
			if (A[i] < A[j])
			{
				int temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}
		}
	}

	int search;
	char answer;

	do
	{
		printf("\nEnter a student for searching (1-40): ");
		scanf("%i", &search);

		if (search > 40 || search < 1)
		{
			printf("Invalid student!");
		}
		else
		{
			printf("Student %i's grade: %i", search, A[search - 1]);
		}

		printf("\nWould you like to keep searching? [Y/N]: ");
		scanf(" %c", &answer);

	} while (toupper(answer) == 'Y');

	printf("\nPress any key to exit...\n");
	getch();
	return 0;
}