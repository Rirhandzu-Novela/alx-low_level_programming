#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: input string
 * @src: input string.
 * @n: input integer
 * Return: A pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len;
	int i;

	char *a = dest;
	char *b = src;

	len = 0;
	i = 0;

	while (*src)
	{
		len++;
		src++;
	}

	while (*dest)
	{
		dest++;
	}

	if (n > len)
	{
		n = len;
	}

	src = b;

	for (; i < n; i++)
	{
		*dest++ = *src++;
	}

	*dest = '\0';
	return (a);
}
