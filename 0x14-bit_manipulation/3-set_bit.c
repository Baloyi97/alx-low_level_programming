#include "main.h"
#include <stdlib.h>

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: The number in which to set the bit.
 * @index: The index of the bit to set.
 * Return: 1 if successful, or -1 on error.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n |= (1 << index);
	return (1);
}
