// Write a C program to display all numbers divisible by 4 that are
// less than 200. Use the "if" statement within the program's loop. The
// counter variable should start with the value 1.

#include <stdio.h>
#include <conio.h>

int main()
{
	for (int i = 1; i < 200; i++)
	{
		if (i % 4 == 0)
			printf("%d\n", i);
	}

	getch();
	return 0;
}