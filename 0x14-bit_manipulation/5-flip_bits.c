#include "main.h"
#include <stdio.h>

/**
 * flip_bits -  function that returns the number of bits you would need to flip
 * @n: int
 * @m: int
 * Return: int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	int j;

	i = n ^ m;
	j = 0;

	while (i)
	{
		j++;
		i &= (i + 1);
	}
	return (j);
}
