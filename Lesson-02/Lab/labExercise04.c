// Write a C program to read three values for the sides of a triangle,
// considering the sides as A, B, and C. Verify if the provided sides
// actually form a triangle, and if this condition is true, indicate the
// type of triangle formed: isosceles, scalene, or equilateral. A triangle
// is a geometric shape (polygon) composed of 3 sides, where each side is
// smaller than the sum of the other two sides.

// Basic Rule: It will be a triangle when A < B + C, B < A + C, and C < A +
// B. A triangle is isosceles when it has 2 equal sides and one different
// side, where A == B or A == C or B == C. It is scalene when all sides are
// different, where A != B and B != C. It is equilateral when all sides are
// equal, where A == B and B == C.

#include <stdio.h>
#include <conio.h>

int main()
{
	float sideA, sideB, sideC;

	printf("Enter the value of side A: ");
	scanf("%f", &sideA);

	printf("Enter the value of side B: ");
	scanf("%f", &sideB);

	printf("Enter the value of side C: ");
	scanf("%f", &sideC);

	if (sideA < sideB + sideC && sideB < sideA + sideC && sideC < sideA + sideB)
	{
		if (sideA == sideB && sideB == sideC)
		{
			printf("The triangle is equilateral.\n");
		}
		else if (sideA == sideB || sideA == sideC || sideB == sideC)
		{
			printf("The triangle is isosceles.\n");
		}
		else
		{
			printf("The triangle is scalene.\n");
		}
	}
	else
	{
		printf("The provided sides do not form a triangle.\n");
	}
	getch();
	return 0;
}
