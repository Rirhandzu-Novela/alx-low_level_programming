#include "main.h"
#include <stdlib.h>
/**
 * wrdcnt - counts numer of words
 * @s: character
 * Return: number of words
 */
int wrdcnt(char *s)
{
	int i;
	int j;

	i = 0;
	j = 0;

	for (; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				j += 1;
		}
		else if (i == 0)
			j += 1;
	}
	j += 1;
	return (j);
}


/**
 * strtow - splits strings
 * @str: string
 * Return: Pointer
 */
char **strtow(char *str)
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	char **s;

	a = 0;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	
	e = wrdcnt(str);
	if (e == 1)
		return (NULL);
	s = (char **)malloc(e * sizeof(char *));
	if (s == NULL)
		return (NULL);
	s[e - 1] = NULL;

	while (str[a])
	{
		if (str[a] != ' ' && (a == 0 || str[a - 1] == ' '))
		{
			for (b = 1; str[a + b] != ' ' && str [a + b]; b++)
				;
			b += 1;
			s[f] = (char *)malloc(b * sizeof(char));
			b -= 1;
			if (s[f] == NULL)
			{
				for (c = 0; c < f; c++)
					free(s[c]);
				free(s[e - 1]);
				free(s);
				return (NULL);
			}
			for (d = 0; d < b; d++)
				s[f][d] =str[a + 1];
			s[f][d] = '\0';
			f += 1;
			a += b;
		}
		else
			a += 1;
	}
	return (s);
}

