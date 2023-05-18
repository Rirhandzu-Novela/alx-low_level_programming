#include "main.h"

/**
 * _strspn -  function that gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The prefix to be measured.
 * Return: The number of bytes in s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int j;

	i = 0;
	j = 0;

	while (*s)
	{
		for (; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				j++;
				break;
			}

			else if (accept[i + 1] == '\0')
			{
				return (j);
			}
		}
		s++;
	}
	return (j);
}

