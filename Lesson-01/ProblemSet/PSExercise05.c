// Write a C program that calculates the Body Mass
// Index (BMI) based on the weight and height entered
// by the user. The program should prompt the user to
// enter their weight in kilograms and their height in
// meters. Calculate the BMI using the provided formula
// and display the result.

// BMI = Weight / (Height * Height)

#include <stdio.h>
#include <conio.h>

int main()
{
	float weight, height, bmi;

	printf("Enter your weight (kg): ");
	scanf("%f", &weight);

	printf("Enter your height (m): ");
	scanf("%f", &height);

	bmi = weight / (height * height);

	printf("Your BMI is: %.2f\n", bmi);

	getch();
	return 0;
}
