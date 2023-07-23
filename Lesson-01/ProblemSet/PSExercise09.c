// Write a C program that calculates the final average
// grade for a student based on the grades obtained in
// two exams and semester activities. Calculate the
// final average by considering that each exam carries
// a weight of 40% and semester activities have a
// weight of 20%.

#include <stdio.h>
#include <conio.h>

int main()
{
	float grade1, grade2, activities, average;

	printf("Enter the grade of Exam 1: ");
	scanf("%f", &grade1);

	printf("Enter the grade of Exam 2: ");
	scanf("%f", &grade2);

	printf("Enter the grade of semester activities: ");
	scanf("%f", &activities);

	average = ((grade1 * 4) + (grade2 * 4) + (activities * 2)) / 10;

	printf("\nThe final average is: %.2f", average);

	getch();
	return 0;
}
