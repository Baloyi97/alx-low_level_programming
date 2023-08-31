#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The decimal number.
 * @index: The index of the bit.
 * Return: The value of the bit at the specified index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);
	if (index > 32)
	return (-1);
	return (bit & 1);
}
