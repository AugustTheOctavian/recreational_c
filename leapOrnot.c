#include <stdio.h>
// to find whether a year is leap or not
// if year is divisble by 4 and not 100 it's a leap year
int main() {
  int year;
  printf("Enter year: \n");
  scanf("%d", &year);
  if ((year % 4 == 0) && (year % 100 != 0)) {
    printf("%d is a leap year\n", year);
  } else {
    printf("%d is not a leap year\n", year);
  }
}