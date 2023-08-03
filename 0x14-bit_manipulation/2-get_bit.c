#include "main.h"
#include <stdio.h>

/**
 * get_bit - Get the value of a bit at a given index
 * @n: Num to be evaluated
 * @index: Get index starting from 0
 * Return: Value of bit at index, or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);

	return ((n >> index) & 1);
}
