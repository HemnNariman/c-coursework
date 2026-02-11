#include <stdio.h>

#include <stdlib.h>

int main()

{

  int grade1;

  int grade2;

  int grade3;

  printf("Enter three grades: \n");

  scanf("%d", &grade1);

  scanf("%d", &grade2);

  scanf("%d", &grade3);

  double average = grade1 + grade2 + grade3;

  printf("The average: %.2lf", (double)average / 3);

  return 0;
}