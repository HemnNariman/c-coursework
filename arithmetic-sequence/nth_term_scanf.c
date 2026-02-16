#include <stdio.h>
#include <stdlib.h>

/*
    Program: Arithmetic Sequence Nth Term Calculator (User Input Version)
    Description:
    This program calculates the Nth term of an arithmetic sequence
    using the formula: an = a1 + (n - 1) * d
*/

int main()
{
  printf("Enter your arithmetic sequence values to find the Nth term.\n\n");

  int a1, d, n;

  printf("Enter the first term (a1): ");
  scanf("%d", &a1);

  printf("Enter the common difference (d): ");
  scanf("%d", &d);

  printf("Enter the term number (n): ");
  scanf("%d", &n);

  printf("The Nth term is: %d\n", a1 + (n - 1) * d);

  return 0;
}
