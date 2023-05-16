#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: character
 * Return:  a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *s;

	j = 0;

	if (size == 0)
	{
		return (NULL);
	}

	s =  malloc(size * sizeof(*s));
	if (s == NULL)
	{
		return (NULL);
	}
	for (; j < size; j++)
	{
		s[j] = c;
	}
	return (s);
}
