// Write a C program to calculate the average of three grades for a
// student and determine if the student is "Approved" if the average is
// greater than or equal to 6.0. If the student's average is below 6.0,
// display a message indicating that the student has not been approved.
// Show the calculated average along with the appropriate message.

#include <stdio.h>
#include <conio.h>

int main()
{
	float grade1, grade2, grade3, average;

	printf("Enter the 1st grade: ");
	scanf("%f", &grade1);

	printf("Enter the 2nd grade: ");
	scanf("%f", &grade2);

	printf("Enter the 3rd grade: ");
	scanf("%f", &grade3);

	average = (grade1 + grade2 + grade3) / 3;

	if (average >= 6.0)
		printf("\nThe student has been APPROVED with an average of: %.2f", average);
	else
		printf("\nThe student has been REJECTED with an average of: %.2f", average);

	getch();
	return 0;
}
