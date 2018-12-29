#include <stdio.h>

int main ()
{

	char ASCII;
	printf("Please enter a character: \n");
	scanf("%c", &ASCII);
	printf("Your character entered: %c\n", ASCII);

	int integer;
	printf("Please enter an integer between 0-127: \n");
	scanf("%i", &integer);
	printf("%c", integer); // convert integer into character


	return 0;
}
