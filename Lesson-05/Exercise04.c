// Create a C program to read 12 elements into an array A. After reading
// the elements, sort them in ascending order. Then, read another array B
// also with 12 elements and sort them in ascending order. Next, create a
// new array C, where each element is the sum of the corresponding elements
// from arrays A and B. Sort the elements of array C in ascending order and
// display their values.

#include <stdio.h>
#include <conio.h>

void order(int *array, int size);

int main()
{
	int A[12], B[12], C[12];

	printf("Array A:\n");
	for (int i = 0; i < 12; i++)
	{
		printf("Enter Number %i: ", i + 1);
		scanf("%i", &A[i]);
	}

	order(A, 12);

	printf("\nArray B:\n");
	for (int i = 0; i < 12; i++)
	{
		printf("Enter number %i: ", i + 1);
		scanf("%i", &B[i]);
	}

	order(B, 12);

	for (int i = 0; i < 12; ++i)
	{
		C[i] = A[i] + B[i];
	}

	order(C, 12);

	printf("\nArray A in ascending order:\n");
	for (int i = 0; i < 12; i++)
	{
		printf("Number %i: %i\n", i + 1, A[i]);
	}

	printf("\nArray B in ascending order:\n");
	for (int i = 0; i < 12; i++)
	{
		printf("Number %i: %i\n", i + 1, B[i]);
	}

	printf("\nArray C in ascending order:\n");
	for (int i = 0; i < 12; i++)
	{
		printf("Number %i: %i\n", i + 1, C[i]);
	}

	printf("\nPress any key to exit...\n");
	getch();
	return 0;
}

void order(int *array, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (array[i] > array[j])
			{
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}
