#include <stdio.h>

int main()

{

  printf("num1 = %d, num2 = %d, sum = num1 + num2 = %d\n", 5, 2, 5 + 2);

  printf("num1 = %d, num2 = %d, result = num1 - num2 = %d\n", 5, 2, 5 - 2);

  printf("num1 = %d, num2 = %d, sum = num1 * num2 = %d\n", 5, 2, 5 * 2);

  printf("num1 = %.1f, num2 = %.1f, result = num1 / num2 = %.1f\n", 5.0, 2.0, 5.0 / 2.0);

  printf("num1 = %d, num2 = %d, result = num1 %% num2 = %d\n", 5, 2, 5 % 2);

  return 0;
}