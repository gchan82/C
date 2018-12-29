#include <stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<time.h>

int main(){

  int maxValue = 5;
  int input;
  srand(time(NULL));
  int randomNumber = rand() % maxValue + 1; // gen num 0-5

  printf("%d\n", randomNumber);

  printf("Guess a number between 0-%d: ", maxValue);
  scanf("%d", &input);

  if(input == randomNumber){
    printf("You guessed the right number!");
  } else {
    printf("Sorry, you lost. Try again.");
  }

  printf("Thank you for playing.");
  return 0;
}