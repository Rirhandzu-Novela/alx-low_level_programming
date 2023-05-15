#include "main.h"

/**
 * _strcpy - Copies a string pointed to by @src
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 * Return: A pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int c;

	c = 0;

	while (src[c])
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
