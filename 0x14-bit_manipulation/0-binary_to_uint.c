#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: String containing the binary number.
 * Return: The converted number, or 0 if invalid input.
 */

unsigned int binary_to_uint(const char *b)
{
	if (!b)
		return (0);
	unsigned int converted_value = 0;

	for (int i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		converted_value = (converted_value << 1) | (b[i] - '0');
	}
	return (converted_value);
}
