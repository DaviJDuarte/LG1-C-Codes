// Write a C program to calculate and display the total sum of the
// first hundred integers, from 1 to 100.

#include <stdio.h>
#include <conio.h>

int main()
{
	int sum = 0;

	for (int i = 1; i <= 100; i++)
	{
		sum += i;
	}

	printf("The total sum of the first hundred integers is: %d\n", sum);

	getch();
	return 0;
}
