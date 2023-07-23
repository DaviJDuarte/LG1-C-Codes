// Write a C program that calculates the volume of a
// cylindrical can based on the user's input for the
// can's height and radius. The program should prompt
// the user to enter the height and radius in
// centimeters, perform the volume calculation, and then display the result
// in liters with two decimal places.

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	float height, radius;

	printf("Enter the can's height (cm): ");
	scanf("%f", &height);

	printf("Enter the can's radius (cm): ");
	scanf("%f", &radius);

	float area = M_PI * pow(radius, 2);
	float volume = area * height;
	float volume_liters = volume / 1000;

	printf("\nThe can's total volume is: %.2f liters\n", volume_liters);

	getch();
	return 0;
}
