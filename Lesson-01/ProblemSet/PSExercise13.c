// Write a C program for a physics laboratory, where a
// uniformly accelerated motion experiment was
// conducted. Given the initial position (s0), initial
// velocity (v0), and acceleration (a) values, the
// program will prompt the user to enter the time (t)
// in seconds. The program will then calculate and
// display the displacement (s) in meters using the
// given formula:
// s = s0 + v0 * t + 0.5 * a * t^2

#include <stdio.h>
#include <conio.h>

int main()
{
	float s0 = 2;
	float v0 = 3;
	float a = 10;

	float t, s;

	printf("Enter the time (seconds): ");
	scanf("%f", &t);

	s = s0 + v0 * t + 0.5 * a * t * t;

	printf("\nThe displacement is: %.2f meters", s);

	getch();
	return 0;
}
