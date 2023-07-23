// Write a C program that calculates the volume and
// surface area of a sphere based on the radius entered
// by the user.

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	float radius, volume, surface_area;

	printf("Enter the radius of the sphere (cm): ");
	scanf("%f", &radius);

	volume = (4.0 / 3) * M_PI * pow(radius, 3);
	surface_area = 4 * M_PI * pow(radius, 2);

	printf("The volume of the sphere is: %.2f cm³\n", volume);
	printf("The surface area of the sphere is: %.2f cm²\n", surface_area);

	getch();
	return 0;
}
