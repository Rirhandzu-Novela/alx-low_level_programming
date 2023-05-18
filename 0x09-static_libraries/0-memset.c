#include "main.h"

/**
 * *_memset -  function that fills memory with a constant byte.
 * @s: A pointer to the memory area to be filled.
 * @c: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

