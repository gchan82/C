#include<stdio.h>

int main()
{
	int pizzaSlices = 5;
	int Eaters = 2;
	int leftOver = pizzaSlices % Eaters;

	printf("%i\n", leftOver);
	return 0;
}
