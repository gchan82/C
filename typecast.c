#include<stdio.h>

int main()
{
	int slices = 17;
	int people = 2;

	double halfThePizza = slices / (double) people; // type cast (double)

	printf("%f\n",halfThePizza);
	return 0;
}
