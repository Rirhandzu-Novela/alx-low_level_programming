#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: string
 * Return: int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;

	if (!b)
		return (0);

	for (i = 0; *b; b++)
	{
		if (*b == '1')
			i = (i << 1) | 1;
		else if (*b == '0')
			i <<= 1;
		else
			return (0);
	}
	return (i);
}
