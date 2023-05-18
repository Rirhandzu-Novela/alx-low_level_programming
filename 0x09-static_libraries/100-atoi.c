#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
	int i;
	unsigned int j;

	i = 1;
	j = 0;

	do {
		if (*s == '-')
		{
			i *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			j = (j * 10) + (*s - '0');
		}
		else if (j > 0)
		{
			break;
		}
	} while (*s++);
	return (j * i);
}
