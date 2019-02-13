// 3 integer inputs (convert 1 into float or double)
// output: average as float

#include <stdio.h>

int main(){
  int nbr1, nbr2, nbr3;
  float avg;
  printf("type 3 integers:\n");
  scanf("%d", &nbr1);
  scanf("%d", &nbr2);
  scanf("%d", &nbr3);
  avg = (nbr1 + (float)nbr2 + nbr3) /3;
  printf("\naverage is: %f", avg);
  return 0;
}