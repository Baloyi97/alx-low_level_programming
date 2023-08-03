#include "main.h"

/**
 * clear_bit - Set value of bit to 0 at a given index
 * @n: Pointer to decimal number to change
 * @index: Position to change
 * Return: 1 on Success, -1 if it fails
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > 64)
		return (-1);

	mask = 1UL << index;
	*n &= ~mask;

	return (1);
}
