#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("Enter number of seconds: ");
  int sec;
  scanf("%d", &sec);

  // convert seconds to hours
  int hours = (sec / 3600);

  // convert remaining seconds to minutes
  int minutes = (sec % 3600) / 60;

  // remaining seconds after full minutes
  int seconds = (sec % 60);

  printf("%d Hours\n%d Minutes\n%d Seconds\n", hours, minutes, seconds);

  return 0;
}