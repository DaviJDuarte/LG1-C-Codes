// Suppose a simple virus has infected the university's database system,
// and the only damage it caused was altering the students' RA
// (Registration Number). After some time, it was discovered that given the
// RA generated by the virus (RAC = x1 x2 x3 x4 x5 x6 x7 x8 x9), the
// correct RA (RAC = y1 y2 y3 y4 y5 y6 y7 y8 y9) could be obtained through
// the following operations:

// y1 = x1, y2 = x2, y3 = x8, y4 = x7, y5 = x5, y6 = x6, y7 = x3, y8 = x4,
// y9 = x9

// For example, if RAC = 197845602, then RAC = 190645782.

// Write a C program that reads the infected RA (RAC) with 9 digits and
// generates the correct RA (RAC) also with 9 digits following the given
// transformation rule.

#include <stdio.h>
#include <conio.h>

int main()
{
	char RAV[9], RAC[9];

	printf("Enter the corrupted RA: ");
	scanf("%s", &RAV);

	RAC[0] = RAV[0];
	RAC[1] = RAV[1];
	RAC[2] = RAV[7];
	RAC[3] = RAV[6];
	RAC[4] = RAV[4];
	RAC[5] = RAV[5];
	RAC[6] = RAV[2];
	RAC[7] = RAV[3];
	RAC[8] = RAV[8];
	RAC[9] = '\0';

	printf("The fixed RA is: %s", RAC);

	printf("\nPress any key to exit...\n");
	getch();
	return 0;
}