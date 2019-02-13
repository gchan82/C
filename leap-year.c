#include <stdio.h>

int main(){
  int year;
    printf("Please type a year:\n");
    scanf("%d", &year);
  //if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
  ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? 
    printf("Year: %d is a leap year.\n", year) :
    printf("The year %d is not a leap year.\n", year);
  return 0;
}