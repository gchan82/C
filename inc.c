#include<stdio.h>

int main()
{

	int num = 1;
	int hold = 2;
	hold = num++; // note: num=1 gets passed before incrementing.
	printf("Num: %i\n Hold: %i\n", num,hold);
	return 0;
}
