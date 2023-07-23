// Write a Python program that calculates and displays the sum of even
// numbers in the range from 1 to 500.

#include <stdio.h>
#include <conio.h>

int main()
{
	int sum = 0;
	for (int i = 1; i <= 500; i++)
	{
		if (i % 2 == 0)
			sum += i;
	}

	printf("The sum of all the even numbers between 1 and 500 is: %i\n", sum);

	getch();
	return 0;
}
