// Write a C program to read 12 elements into an array and then arrange them
// in descending order. Finally, display the elements in the sorted order.

#include <stdio.h>
#include <conio.h>

int main()
{
	int A[12];

	for (int i = 0; i < 12; i++)
	{
		printf("Enter number %i: ", i + 1);
		scanf("%i", &A[i]);
	}

	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			if (A[i] > A[j])
			{
				int temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}
		}
	}

	printf("\nNumbers in descending order:\n");

	for (int i = 0; i < 12; i++)
	{
		printf("Number %i: %i\n", i + 1, A[i]);
	}

	printf("\nPress any key to exit...\n");
	getch();
	return 0;
}
