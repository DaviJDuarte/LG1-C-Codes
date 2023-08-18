#include <stdio.h>
#include <conio.h>

void read_A(int A[30]);
void read_B(int B[30]);
void merge(int A[30], int B[30], int C[30]);
void display_C(int C[60]);

int main(void)
{
	int A[30], B[30], C[60];

	read_A(A);
	read_B(B);
	
	merge(A, B, C);

	printf("\n\n");
	display_C(C);

	printf("\nPress any key to exit...");
	getch();
	return 0;
}

void read_A(int A[30])
{
	for (int i = 0; i < 30; i++)
	{
		printf("Enter the %i element of Array A: ", i + 1);
		scanf("%i", &A[i]);
	}
	return;
}

void read_B(int B[30])
{
	for (int i = 0; i < 30; i++)
	{
		printf("Enter the %i element of Array B: ", i + 1);
		scanf("%i", &B[i]);
	}
	return;
}

void merge(int A[30], int B[30], int C[30])
{
	for (int i = 0; i < 30; i++)
	{
		C[i] = A[i];
		C[i + 30] = B[i];
	}
	return;
}

void display_C(int C[60])
{
	for (int i = 0; i < 60; i++)
	{
		printf("\nThe %i° element of array C is: %i", i + 1, C[i]);
	}
}