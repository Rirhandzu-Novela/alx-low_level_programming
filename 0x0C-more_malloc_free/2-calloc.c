#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - function that allocates memory for an array
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int n;
	char *s;

	n = 0;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	s = malloc(size * nmemb);
	if (s == NULL)
	{
		return (NULL);
	}
	while (n < (size * nmemb))
	{
		s[n] = '\0';
		n++;
	}
	return (s);
}
