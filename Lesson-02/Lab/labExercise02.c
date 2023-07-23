// Read two values representing two grades of a student
// and display a message indicating that the student
// has passed if the average value is greater than or
// equal to 6.0. If the average value is less than 6.0,
// request the exam grade, add it to the average, and
// calculate a new average. If the new average is
// greater than or equal to 5.0, display a message
// stating that the student has passed in the exam. If
// the student has not passed, display a message
// informing this condition. Also, display the value of
// the average in any condition.

#include <stdio.h>
#include <conio.h>

int main()
{
	float grade1, grade2, average, examGrade, newAverage;

	printf("Enter the first grade: ");
	scanf("%f", &grade1);

	printf("Enter the second grade: ");
	scanf("%f", &grade2);

	average = (grade1 + grade2) / 2;

	if (average >= 6.0)
	{
		printf("The student is approved with an average of %.2f.\n", average);
	}
	else
	{
		printf("Enter the exam grade: ");
		scanf("%f", &examGrade);

		newAverage = (average + examGrade) / 2;

		if (newAverage >= 5.0)
		{
			printf("The student is approved in the exam with an average of %.2f.\n", newAverage);
		}
		else
		{
			printf("The student is not approved with an average of %.2f.\n", newAverage);
		}
	}

	getch();
	return 0;
}
