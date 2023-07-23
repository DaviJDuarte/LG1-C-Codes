// Write a C program that calculates the late payment
// amount for a given principal amount, interest rate,
// and time in months of delay. The program should
// prompt the user to enter the principal amount in
// dollars, the interest rate, and the time of delay in
// months. Calculate the late payment using the
// provided formula and display the result in dollars.

// Late Payment Amount = Principal Amount + (Principal Amount * (Interest Rate / 100) * Time)

#include <stdio.h>
#include <conio.h>

int main()
{
	float principal_amount, late_payment, interest_rate, time;

	printf("Enter the principal amount: $");
	scanf("%f", &principal_amount);

	printf("Enter the interest rate: ");
	scanf("%f", &interest_rate);

	printf("Enter the time in months of delay: ");
	scanf("%f", &time);

	late_payment = principal_amount + (principal_amount * (interest_rate / 100) * time);

	printf("\nThe late payment amount is: $%.2f", late_payment);

	getch();
	return 0;
}
