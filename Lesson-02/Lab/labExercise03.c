// Write a C program to read two numeric values and
// display the difference between the larger and the
// smaller value.

#include <stdio.h>
#include <conio.h>

int main()
{
	float value1, value2, difference;

	printf("Enter the first value: ");
	scanf("%f", &value1);

	printf("Enter the second value: ");
	scanf("%f", &value2);

	if (value1 == value2)
	{
		printf("The two values are the same. There is no difference.\n");
		return 0;
	}
	else if (value1 > value2)
	{
		difference = value1 - value2;
	}
	else
	{
		difference = value2 - value1;
	}

	printf("The difference between the larger and smaller value is: %.2f\n", difference);

	return 0;
}
