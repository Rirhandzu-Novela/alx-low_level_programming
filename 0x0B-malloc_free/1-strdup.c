#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function returns a pointer to a new string
 * @str: string
 * Return: pointer to a new string
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int i, j;

	i = 1;
	j = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		;
	}

	s = (char *)malloc((sizeof(char) * i) + 1);

	if (s == NULL)
	{
		return (NULL);
	}

	for (; j <= 1; j++)
	{
		s[j] = str[j];
	}

	s[j] = '\0';

	return (s);
}
