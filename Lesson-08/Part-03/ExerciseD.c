#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void power(int x, int y, int* result)
{
	*result = pow(x, y);
	return;
}


int main(int argc, char* argv[])
{
	if (argc != 3)
	{
		printf("Incorrect Usage.");
		printf("Usage: ./ExeriseD [base] [exponent]");
		return 1;
	}

	int base = atoi(argv[1]);
	int exponent = atoi(argv[2]);
	int coefficient;

	power(base, exponent, &coefficient);
	printf("%i to the power of %i is: %i", base, exponent, coefficient);

	printf("\nPress any key to exit...");
	getchar();
	return 0;
}