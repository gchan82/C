//convert A to a
// convert a to A
#include <stdio.h>
int main(){
  char ch;
  printf("Please type a character: \n");
  scanf("%c", &ch);
  if(ch >= 'a' && ch <= 'z')
    ch -= 32;
  else if(ch >= 'A' && ch <= 'Z')
    ch += 32;
  printf("%c", ch);
  return 0;
}