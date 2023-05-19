#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - function that concatenates two strings
 * @s1: pointer to string
 * @s2: pointer to string
 * @n: int
 * Return: pointer to string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a;
	unsigned int b;
	unsigned int c;
	unsigned int d;

	char *e;

	a = 0;
	b = 0;
	c = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (; s1[a] != '\0'; a++)
	{
		;
	}
	for (; s2[b] != '\0'; b++)
	{
		;
	}
	if (n >= b)
	{
		n = b;
	}
	e = malloc(sizeof(char) * (a + n +  1));
	if (e == NULL)
	{
		return (NULL);
	}
	for (; s1[c]; c++)
	{
		e[c] = s1[c];
	}
	for (d = a; d < a + n; d++)
	{
		e[d] = s2[d - a];
	}
	e[d] = '\0';
	return (e);
}
