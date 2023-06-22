#include "main.h"

/**
 * positve_or_negative - Determine if a number is positive, negative or zero.
 * @i: 0 is a number to be checked
 * Return: Nothing
 */

void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is %s\n", i, "negative");
	}
	else if (i > 0)
	{
		printf("%d is %s\n", i, "positive");
	}
	else
	{
		printf("%d is %s\n", i, "zero");
	}
}
