#include "main.h"
#include <stdlib.h>
/**
 * *argstostr - function that concatenates all the arguments
 * @ac: count
 * @av: vector
 * Return:  pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int a, b, c, d;
	char *s;

	if (ac == 0)
	{
		return (NULL);
	}
	for (a = b = 0; b < ac; b++)
	{
		if (av[b]  == NULL)
		{
			return (NULL);
		}
		for (c = 0; av[b][c] != '\0'; c++)
			a++;
		a++;
	}
	s = malloc((a + 1) * sizeof(char));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (b = c = d = 0; d < a; c++, d++)
	{
		if (av[b][c] == '\0')
		{
			s[d] = '\n';
			b++;
			d++;
			c = 0;
		}
		if (d < a - 1)
		{
			s[d] = av[b][c];
		}
	}
	s[d] = '\0';
	return (s);
}

