#include "main.h"

/**
 * flip_bits - Flip bits to convert one number to another number
 * @n: first number
 * @m: second number to convert to
 * Return: Numb of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff)
	{
		diff &= (diff - 1);
		count++;
	}

	return (count);
}
