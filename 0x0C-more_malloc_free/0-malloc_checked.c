#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked -  function that allocates memory
 * @b: int
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *s;

	s = malloc(b);

	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
