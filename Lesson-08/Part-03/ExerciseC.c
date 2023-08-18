#include <stdio.h>
#include <conio.h>

float calculate_fee(float *amount, int *days, float *fee);

int main(void)
{
	float *amount;
	int *days;

	printf("Enter the installment amount: ");
	scanf("%f", &amount);
	
	printf("How many days is it late?: ");
	scanf("%i", &days);

	float *fee;
	calculate_fee(*amount, *days, *fee);

	printf("\nThe lateness fee is: $%.2f", fee);
	printf("\nThe new total is: $%.2f", amount);

	printf("\n\nPress any key to exit...");
	getch();
	return 0;
}

float calculate_fee(float* amount, int* days, float* fee)
{
	*fee = *amount * 0.3 * *fee;
	*amount += *fee;
}