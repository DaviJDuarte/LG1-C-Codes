#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int sum(int num);

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        printf("Incorrect Usage. Must provide one command line argument!");
        return 1;
    }
    int num = atoi(argv[1]);

    int result = sum(num);

    printf("The sum of the first %d whole numbers is: %d", num, result);
    printf("\nPress any key to exit...");

    getch();
    return 0;
}

int sum(int num)
{
    if (num == 1)
    {
        return 1;
    }

    return num += sum(num - 1);
}