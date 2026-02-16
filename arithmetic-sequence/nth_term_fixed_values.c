#include <stdio.h>
#include <stdlib.h>

/*
    Program: Arithmetic Sequence Nth Term Calculator (Fixed Values Version)
    Description:
    This program calculates the Nth term of an arithmetic sequence
    using predefined values.
    Example sequence: 1, 3, 5, ...
*/

int main()
{
  int a1 = 1; // first term
  int d = 2;  // common difference
  int n = 9;  // term to find

  int an = a1 + (n - 1) * d;

  printf("The Nth term value is: %d\n", an);

  return 0;
}
