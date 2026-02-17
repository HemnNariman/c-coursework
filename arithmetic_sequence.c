#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("Enter initial term (a1): ");
  int a1;
  scanf("%d", &a1);

  printf("Enter total terms (n) : ");
  int n;
  scanf("%d", &n);

  printf("Enter n-th element (an) : ");
  int an;
  scanf("%d", &an);

  int sn = (a1 + an) * n / 2;
  printf("Sum of the sequence is: %d", sn);

  return 0;
}
