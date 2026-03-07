#include <stdio.h>

#include <stdlib.h>

int main()

{

  printf("Enter your car speed: ");

  double carSpeed;

  scanf("%lf", &carSpeed);

  printf("Enter the distance from your city and the city you are going to: ");

  double myCityToNextCity;

  scanf("%lf", &myCityToNextCity);

  printf("Your car speed is %.2lfKM/HOUR and the distance from your city and the city you are going to is %.2lfKM \n", carSpeed, myCityToNextCity);

  double howLongAtoB = (myCityToNextCity / carSpeed);

  int hours = (int)howLongAtoB;

  double minutes = (howLongAtoB - hours) * 60;

  printf("You will take %d hours and %.0f minutes to get there\n", hours, minutes);

  return 0;
}