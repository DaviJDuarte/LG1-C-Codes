// Write a C program that calculates the final average
// grade for a student based on the grades obtained in
// four bimesters.

#include <stdio.h>
#include <conio.h>

int main()
{
	float grade1, grade2, grade3, grade4, average;

	printf("Enter the grade of the first bimester: ");
	scanf("%f", &grade1);

	printf("Enter the grade of the second bimester: ");
	scanf("%f", &grade2);

	printf("Enter the grade of the third bimester: ");
	scanf("%f", &grade3);

	printf("Enter the grade of the fourth bimester: ");
	scanf("%f", &grade4);

	average = (grade1 + grade2 + grade3 + grade4) / 4;

	printf("\nThe final average is: %.2f\n", average);

	getch();
	return 0;
}
