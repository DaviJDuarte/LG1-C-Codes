#include <stdio.h>
#include <conio.h>

void merge(int arr[], int l, int m, int r)
{
	int n1 = m - l + 1;
	int n2 = r - m;

	int L[n1], R[n2];

	for (int i = 0; i < n1; i++)
	{
		L[i] = arr[l + i];
	}

	for (int j = 0; j < n2; j++)
	{
		R[j] = arr[m + 1 + j];
	}

	int i = 0;
	int j = 0;
	int k = l;

	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}

	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}


void mergeSort(int arr[], int l, int r)
{
	if (l < r)
	{
		int m = l + (r - l) / 2;

		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);

		merge(arr, l, m, r);
	}
}

void read_array(int arr[])
{
	for (int i = 0; i < 12; i++)
	{
		printf("Enter element %i: ", i + 1);
		scanf("%i", &arr[i]);
	}

	return;
}

int main(void)
{
	int A[12], B[12], C[12];

	printf("Array A\n");
	read_array(A);
	mergeSort(A, 0, 12 - 1);

	printf("\nArray B\n");
	read_array(B);
	mergeSort(B, 0, 12 - 1);

	for (int i = 0; i < 12; i++)
	{
		C[i] = A[i] + B[i];
	}

	mergeSort(C, 0, 12 - 1);

	printf("\nArray C:");
	for (int i = 0; i < 12; i++)
	{
		printf("\nElement %i: %i", i + 1, C[i]);
	}

	printf("\nPress any key to exit...");
	getch();
	return 0;
}