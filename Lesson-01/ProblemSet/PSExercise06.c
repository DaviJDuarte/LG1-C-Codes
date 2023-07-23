// Write a C program that calculates the area and
// circumference of a circle based on the radius
// entered by the user.

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	float radius, area, circumference;

	printf("Enter the radius of the circle (cm): ");
	scanf("%f", &radius);

	area = M_PI * (radius * radius);
	circumference = 2 * M_PI * radius;

	printf("The area of the circle is: %.2f cm²\n", area);
	printf("The circumference of the circle is: %.2f cm\n", circumference);

	getch();
	return 0;
}
