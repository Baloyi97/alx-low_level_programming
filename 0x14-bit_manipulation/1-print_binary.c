#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a number
 * @n: Decimal number to print as binary
 */

void print_binary(unsigned long int n)
{
	int bit_position = sizeof(n) * 8 - 1;
	int found_one = 0;

	if (n == 0)
	{
		printf("0");
		return;
	}

	while (bit_position >= 0)
	{
		unsigned long int bit_mask = 1UL << bit_position;

		if (n & bit_mask)
		{
			putchar('1');
			found_one = 1;
		}
		else if (found_one)
		{
			putchar('0');
		}

		bit_position--;
	}

	putchar('\n');
}

