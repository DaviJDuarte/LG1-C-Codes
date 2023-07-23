// // Write a C program that calculates various parameters related to a
// trip. The program should take input from the user for the travel time
// and average speed and then calculate the distance traveled and the
// amount of fuel used (assuming fuel efficiency of 12 kilometers per
// liter). Finally, the program should display the results to the user.

#include <stdio.h>
#include <conio.h>

int main()
{
	float distance, time, speed, fuel;

	printf("How many hours does the trip take?: ");
	scanf("%f", &time);

	printf("What is the average speed of the trip?: ");
	scanf("%f", &speed);

	distance = time * speed;
	fuel = distance / 12;

	printf("\nThe average speed is: %.2f km/h\nThe travel time is: %.2f hours\nThe distance traveled is: %.2f km\nThe amount of fuel used is: %.2f liters\n", speed, time, distance, fuel);

	getch();
	return 0;
}
