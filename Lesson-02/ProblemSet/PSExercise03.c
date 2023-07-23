// Develop a C program for the university's
// secretariat to handle grade rounding issues. The
// program should prompt the user to input a grade and
// perform the necessary rounding according to the
// following rules:

// Grades with a remainder greater than 0.5 should be
// rounded UP.
// Example: 4.6 -> 5.0

// Grades with a remainder less than or equal to 0.5
// should be rounded DOWN.
// Example: 4.5 -> 4.0

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(void)
{
    float grade, new_grade;

    printf("Enter the grade: ");
    scanf("%f", &grade);

    float check = grade - (floor(grade));

    if (check < 0.5)
        new_grade = floor(grade);
    else
        new_grade = ceil(grade);

    printf("The new grade is: %.2f\n", new_grade);

    getch();
    return 0;
}