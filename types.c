#include <stdio.h>

int main(){
	
	int dogs = 6;
	double cash;
	
	printf("How much cash do you have?\n");
	scanf("%lf", &cash); // %lf - long float (computer can use as float or scientific)
	printf("float: %f\n scientific notation: %e\n computer decides: %g\n", cash, cash, cash);
	printf("You have $%f and %i dogs.", cash, dogs);
	
	return 0;

}
