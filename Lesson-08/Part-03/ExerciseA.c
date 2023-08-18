#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void sum(int* num);

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        printf("Incorrect Usage. Must provide one command line argument!");
        return 1;
    }
    int num = atoi(argv[1]);
    sum(&num);

    printf("Result: %d", num);
    printf("\nPress any key to exit...");

    getch();
    return 0;
}

void sum(int *num)
{
    int first_term = 1;
    int last_term = first_term + (*num - 1);
    *num = (*num * (first_term + last_term)) / 2;
}
