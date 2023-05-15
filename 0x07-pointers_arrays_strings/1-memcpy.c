#include "main.h"
/**
 * _memcpy - Copies @n bytes from the memory area pointer
 * @dest: A pointer to the memory area to copy @src into.
 * @src: The source buffer to copy characters from.
 * @n: The number of bytes to copy from @src.
 *
 * Return: A pointer to the destination buffer @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r;
	int i;

	r = 0;
	i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
	}
	return (dest);
}
