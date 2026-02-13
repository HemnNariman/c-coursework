#include <stdio.h>

#include <stdlib.h>

int main()

{

  printf("Enter the temperature in Celsius: \n");

  double celsius;

  scanf("%lf", &celsius);

  double fahrenheit = (celsius * 1.8) + 32;

  printf("The temperature in Fahrenheit is: %.1lf \n", fahrenheit);

  printf("********\n");

  printf("Enter the temperature in Fahrenheit: \n");

  double fahrenheit2;

  scanf("%lf", &fahrenheit2);

  double celsius2 = (fahrenheit2 - 32) / 1.8;

  printf("The temperature in Celsius is: %.1lf ", celsius2);

  return 0;
}