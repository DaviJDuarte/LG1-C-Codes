// Write a C program for a simple calculator that allows the user to
// perform basic arithmetic operations. The calculator should prompt the
// user to enter one of the following keys: '+', '-', '*', '/', or 'F'.

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main()
{
	float number1, number2, result;
	char opc;

	printf("Calculator");

	while (opc != 'f')
	{
		printf("\n\nSelect an option: \n+ - Sum\n- - Subtraction\n* - Multiplication\n/ - Division\nF - Finish\n");
		fflush(stdin);
		scanf("%c", &opc);

		opc = tolower(opc);

		if (opc != 'f')
		{
			printf("Enter number 1: ");
			scanf("%f", &number1);

			printf("Enter number 2: ");
			scanf("%f", &number2);
		}

		switch (opc)
		{
		case '+':
			result = number1 + number2;
			break;
		case '-':
			result = number1 - number2;
			break;
		case '*':
			result = number1 * number2;
			break;
		case '/':
			result = number1 / number2;
			break;
		case 'f':
			printf("Finishing Calculator.\n");
			getch();
			return 0;
			break;
		default:
			printf("\nInvalid Option");
		}

		printf("%.2f %c %.2f = %.2f", number1, opc, number2, result);
	}
}