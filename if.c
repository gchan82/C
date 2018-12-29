#include<stdio.h>
#include<stdbool.h>

int main()
{

  bool pizzaIsHealthy = true;
  int temp;
  printf("Do you believe in the power of pizza? 1 is true 0 is false: ");
  scanf("%d", &temp);
  pizzaIsHealthy = temp;

  if(pizzaIsHealthy) // true as long as not zero
  {
    printf("Welcome to my pizza app");
  }

}
