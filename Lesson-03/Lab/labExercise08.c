// Write a C program to display the Fibonacci series up to the
// fifteenth term. The Fibonacci series is formed by the sequence: 1, 1, 2,
// 3, 5, 8, 13, 21, 34, and so on. This series is characterized by the sum
// of a subsequent term with its preceding term.

#include <stdio.h>
#include <conio.h>

int main()
{
  int fibonacci_curr = 1;
  int fibonacci_prev = 0;

  for (int i = 0; i < 15; i++)
  {
    int fibonacci_next = fibonacci_curr + fibonacci_prev;

    fibonacci_prev = fibonacci_curr;
    fibonacci_curr = fibonacci_next;

    printf("%i\n", fibonacci_prev);
  }

  getch();
  return 0;
}
