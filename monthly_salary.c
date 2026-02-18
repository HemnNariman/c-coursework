#include <stdio.h>

#include <stdlib.h>

int main()

{

  printf("Enter how many hours you work a day: ");

  double hours;

  scanf("%lf", &hours);

  printf("Enter your salary per hour: ");

  double salaryPerHour;

  scanf("%lf", &salaryPerHour);

  printf("You work a day for about %.2lf hours and your salary per hour is: %.2lf\n", hours, salaryPerHour);

  printf("Enter how many days you work in a month: ");

  double daysOfWorkInAmonth;

  scanf("%lf", &daysOfWorkInAmonth);

  double totalHoursWorkedInAmonth = (daysOfWorkInAmonth * hours);

  printf("You work in a month %.2lf hours \n", totalHoursWorkedInAmonth);

  double totalMonthlySalary = (totalHoursWorkedInAmonth * salaryPerHour);

  printf("Your salary would be %.2lf$ a month", totalMonthlySalary);

  return 0;
}
