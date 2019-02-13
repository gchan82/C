#include <stdio.h>

int main()
{
	int units;					// you need to input this
	double bill_amount; // you need to calculate this

	// prompt user to input unit consumed using printf and then
	printf("Please input units consumed: \n");
	// using scanf read the value into the unit variable.
	scanf("%d", &units);

	// Now, use if-elseif to decide about rate
	if (units < 0)
	{
		bill_amount = 0;
		printf("Unit consumed cannot be negative\n");
	}
	else if (units >= 0 && units <= 100)
	{
		bill_amount = (double)units * (double)0.2; // for this range 0.2 is the rate
	}
	else if (units > 100 && units <= 250)
	{ // >100 and <=250
		bill_amount = 20 + (units - 100) * 0.5;
		// please note that the bill must be calculated on slabs (see instructions)
	}
	else if (units > 250 && units <= 500)
	{ // >250 and  <=500
		// please note that the bill must be calculated on slabs (see instructions)
		bill_amount = 95 + (units - 250) * .75;
	}
	else
	{ // for anything >500
		// please note that the bill must be calculated on slabs (see instructions)
		bill_amount = 282.5 + (units - 500) * 1;
	}

	// ** finally print the bill amount here, please note that if the unit consumed is
	// invalid that is negative then no bill should be printed. **
	if (bill_amount > 0)
	{
		printf("Your electric bill amount is: $%0.2lf\n", bill_amount);
	}
	return 0;
}