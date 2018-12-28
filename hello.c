// build: gcc hello.c
// run: ./a

// build alt: gcc -g hello.c -o helloworld.exe
// run: ./hellowworld

// vim: vim hello.c
// vim quit: :q
// insert: i, back to block: esc
// save/quit: esc + :wq
#include "stdio.h"
#include "conio.h"
#include "stdlib.h"

int main()
{
  system("cls");
  printf("hello world!\n");
  return (5);
}
