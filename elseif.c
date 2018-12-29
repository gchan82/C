#include <stdio.h>

/*
1. add pt
2. view pt
3. search pt
4. exit
*/

int main()
{
  printf("Choose a menu option: \n");
  printf("1. Add a patient \n");
  printf("2. View a patient: \n");
  printf("3. Search for a patient: \n");
  printf("4. Exit: \n");

  int input;
  scanf("%d", &input);
  if (input == 1)
  {
    //add pt
    printf("1. Add a patient \n");
  }
  else if (input == 2)
  {
    // view pt
    printf("2. View a patient: \n");
  }
  else if (input == 3)
  {
    // search pt
    printf("3. Search for a patient: \n");
  }
  else if (input ==4)
  {
    //exit
    printf("Exiting...");
  } else
  {
    printf("Incorrect input. \n");
  }

  return 0;
}