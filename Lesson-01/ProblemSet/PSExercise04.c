// Write a C program that calculates the area and
// perimeter of a rectangle based on the height and
// width entered by the user. The program should prompt
// the user to enter the height and width of the
// rectangle in centimeters. Calculate the area and
// perimeter, then display the results.

#include <stdio.h>
#include <conio.h>

int main()
{
	float height, width, area, perimeter;

	printf("Enter the height of the rectangle (cm): ");
	scanf("%f", &height);

	printf("Enter the width of the rectangle (cm): ");
	scanf("%f", &width);

	area = height * width;
	perimeter = 2 * (height + width);

	printf("The area of the rectangle is: %.2f cm²\n", area);
	printf("The perimeter of the rectangle is: %.2f cm\n", perimeter);

	getch();
	return 0;
}
