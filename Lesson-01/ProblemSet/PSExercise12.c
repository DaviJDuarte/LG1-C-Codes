#include <stdio.h>
#include <conio.h>

int main()
{
    float distance, time, average_speed;

    printf("Enter the distance traveled by the vehicle (in km): ");
    scanf("%f", &distance);

    printf("Enter the time taken by the vehicle (in hours): ");
    scanf("%f", &time);

    average_speed = distance / time;

    printf("\nThe average speed of the vehicle is: %.2f km/h", average_speed);

    getch();
    return 0;
}


// Write a C program that receives input from the user 
// for the distance traveled and the time taken by a 
// moving vehicle. Calculate and display its average 
// speed
