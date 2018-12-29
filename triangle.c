#include<stdio.h>
#include<math.h>

int main()
{
	double a, b, c;
	double a2, b2, c2;	
	printf("Please type length of a: \n");
	scanf("%lf", &a);
	printf("Please type length of b: \n");
	scanf("%lf", &b);
	
	a2 = a*a;
	b2 = b*b;

	c2 = a2 + b2;
	c = sqrt(c2);

	printf("The length of c: %f\n", c);
	
	return 0;
}
