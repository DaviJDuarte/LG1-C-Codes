// Create a C program that reads a 9-digit RA (Registration Number) and
// generates a new RA by reversing the order of the 4 least significant
// digits in the initial RA. For example, if the initial RA is 972845236,
// the new RA should be 972846325. Similarly, if the initial RA is
// 984475211, the new RA should be 984471125. The program should read the
// initial RA and display the newly generated RA.

#include <stdio.h>
#include <conio.h>

int main()
{
	char old_RA[9], new_RA[9];

	printf("Enter the initial RA: ");
	scanf("%s", &old_RA);

	new_RA[0] = old_RA[0];
	new_RA[1] = old_RA[1];
	new_RA[2] = old_RA[2];
	new_RA[3] = old_RA[3];
	new_RA[4] = old_RA[4];
	new_RA[5] = old_RA[8];
	new_RA[6] = old_RA[7];
	new_RA[7] = old_RA[6];
	new_RA[8] = old_RA[5];
	new_RA[9] = '\0';

	printf("\nThe new RA is: %s", new_RA);

	printf("\nPress any key to exit...\n");
	getch();
	return 0;
}