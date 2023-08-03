#include "main.h"
#include <stdio.h>

/**
 * print_binary - Print bin representation of a number
 * @n: Decimal number to print as bin
 */

void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int leading_zero;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (temp = n, leading_zero = 0; (temp >>= 1) > 0; leading_zero++)
		;

	for (; leading_zero >= 0; leading_zero--)
	{
		if ((n >> leading_zero) & 1)
			printf("1");
		else
			printf("0");
	}
}
