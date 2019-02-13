#include <stdio.h>

int main(){
  int a;
  char c;
  printf("Please type an integer\n");
  scanf("%d", &a);
  printf("%d\n", a);
  printf("Please type a character\n");
  scanf(" %c", &c);
  printf("%c\n", c);



  return 0;
}