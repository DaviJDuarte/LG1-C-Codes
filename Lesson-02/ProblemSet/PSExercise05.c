// Write a C program to calculate the net salary of employees in a company.
// The net salary is composed of deductions and bonuses, following the
// rules below:

// Deductions:

// If the gross salary is less than 800.00, no deductions will be made.
// If the gross salary is between 800.00 and 1600.00 (inclusive), deduct 8% for Income Tax and 5% for charges.
// If the gross salary is greater than 1600.00, deduct 15% for Income Tax and 7% for charges.

// Bonuses:

// If an employee has worked more than 160 hours in a month, divide their
// gross salary by 160 (representing hours worked) and calculate a 50%
// bonus on the excess hours.

// The user should input the gross salary and the number of hours worked in a month for each employee. The program will then display the net salary for each employee. The user can calculate salaries for N employees, and to end the program, the user should enter 0 as the gross salary. Upon finishing the calculations, the program will display the overall total of net salaries.

#include <stdio.h>
#include <conio.h>
#include <math.h>

float get_gross_salary();
int get_hours();
float calculate_net_salary(float gross_salary, int hours);

int main()
{
	float gross_salary;
	float total_net_salaries = 0;
	do
	{
		gross_salary = get_gross_salary();

		if (gross_salary > 0)
		{
			int hours = get_hours();
			float net_salary = calculate_net_salary(gross_salary, hours);
			total_net_salaries += net_salary;
			printf("The Net Salary is: %.2f\n\n", net_salary);
		}

	} while (gross_salary != 0);

	printf("\nThe overall total of net salaries is: %.2f", total_net_salaries);

	printf("\nFinishing Application. Press any button to exit.");

	getch();
	return 0;
}

float get_gross_salary(void)
{
	float gross_salary;

	printf("Enter the gross salary: ");
	scanf("%f", &gross_salary);

	return gross_salary;
}

int get_hours(void)
{
	int hours;

	printf("Enter the amount of hours: ");
	scanf("%i", &hours);

	return hours;
}

float calculate_net_salary(float gross_salary, int hours)
{
	float net_salary;

	if (gross_salary > 800)
		net_salary = gross_salary;

	if (800 <= gross_salary && gross_salary <= 1600)
		net_salary = gross_salary - (gross_salary * 0.08) - (gross_salary * 0.05);

	if (gross_salary > 1600)
		net_salary = gross_salary - (gross_salary * 0.15) - (gross_salary * 0.07);

	if (hours > 160)
	{
		int excedding_hours = hours - 160;
		gross_salary /= 160;
		net_salary += gross_salary * excedding_hours * 1.5;
	}

	return net_salary;
}