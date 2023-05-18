#include "main.h"

/**
 * _strncpy - Copies at most an inputted number
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to copied from src.
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int len;

	i = 0;
	len = 0;

	while (src[i++])
	{
		len++;
	}

	for (; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}

	for (i = len; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}

