// Write a C program to display all odd integer values between 0 and
// 20. To check if a number is odd, use a loop to verify the logical
// condition within an IF statement. If the number is odd, display it;
// otherwise, move on to the next number.

#include <stdio.h>
#include <conio.h>

int main()
{
	for (int i = 0; i < 20; i++)
	{
		if (i % 2 == 1)
		{
			printf("%i\n", i);
		}
	}
}