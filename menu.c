#include <stdio.h>
#include <math.h>
/**

When the program executes it will work in the following way:
You must accomplish all the menu options and validation checkings exactly as asked.

---- MENU ----
1. Find factorial
2. Find a^b
3. Quit

What you want to do? 1
Enter number: -1
Invalid number for factorial

---- MENU ----
1. Find factorial
2. Find a^b
3. Quit
What you want to do? 1
Enter number: 5
Factorial of 5 is 120

---- MENU ----
1. Find factorial
2. Find a^b
3. Quit

What you want to do? 20
This program can find factorials only in the range 0 - 10

---- MENU ----
1. Find factorial
2. Find a^b
3. Quit
What you want to do? 2
Enter a: 2
Enter b: 5
2^5 = 32.0

---- MENU ----
1. Find factorial
2. Find a^b
3. Quit
What you want to do? 5
Invalid menu option

---- MENU ----
1. Find factorial
2. Find a^b
3. Quit
What you want to do? 3

*** Thank you ***

NOTE: You should use library function pow to find a^b, no need to write code 
for finding a^b.

*/

int main()
{
	int quit = 0;
	int n;						// n is the number for which you will find factorial
	int p=1;						// you are going to keep the factorial of n in p
	double base, exp; // for a^b

	int option; // for keeping the menu option
	while (!quit)
	{
		// print the menu here
		printf("---- MENU ----\n");
		printf("1. Find factorial\n");
		printf("2. Find a^b\n");
		printf("3. Quit\n");
		// get the response into option variable.
		scanf("%d", &option);
		// Now. you can use if-else to check the option and do needful
		if (option ==1){
			printf("Please input n for factorial value:\n");
			scanf("%d", &n);
			if (n < 0)
			{
				printf("Invalid number for factorial\n");
			}
			if (n > 10)
			{
				printf("This program can find factorials only in the range 0 - 10\n");
			}
			if (n==1)
			{
				p = 1;
			}
			if (n==0)
			{
				p = 0;
			}
			if(n>1 && n<=10){
			while (n > 1 && n <= 10)
			{
				p *= n;
				n--;
			}
			printf("Your factorial value is: %d\n", p);
			}
			p = 1;
		}
		else if (option ==2){
			printf("Please input base a:\n");
			scanf("%d", &base);
			printf("Please input exponent b:\n");
			scanf("%d", &exp);
			double sum;
			sum = base;
			for (int i = 0; i < (int)exp; i++)
			{
				sum *= base;
			}
			printf("Your a^b value is: %0.2lf\n", base);
		}
		else if(option==3){
			return 0;
		}
		else if (option <1 || option >3){
			printf("Invalid menu option\n");
		}
		else{
			printf("You entered a wrong character.\n");
		}
		// When option == 3, you need to do something with the variable quit, think
		// about that.
		// When option == 1, you should read n and first check the validity,
		// if n < 0, a particular message has to be printed, when n > 10, another
		// message has to be printed (see the expected output above), if n is valid
		// write a while loop to calculate the factorial and print it, becareful about
		// the initial value of p.
		// for option == 2, read base and exponant then make a call to the pow function
		// print the return value using printf. You may declare a variable to hold the
		// result.
	}
}