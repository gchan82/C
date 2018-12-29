#include<stdio.h>

int main() 
{	//operator precedence
	int x,y;
	x = y = 5; // y=5 eval first.

	int z = 20;
	y=2;
	x= -y + z; // -y eval first
	return 0;
}
