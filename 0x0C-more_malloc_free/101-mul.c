#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * int_calloc -spcial calloc
 * @nmemb: memb
 * @size: size
 * Return: integer
 */
int *int_calloc(int nmemb, unsigned int size)
{
	int *i;
	int j;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	i = malloc(nmemb * size);
	if (i == NULL)
	{
		return (NULL);
	}
	j = 0;
	for (; j < nmemb; j++)
		i[j] = 0;
	return (i);
}
/**
 * multi - multiplication
 * @prod: result of multiplication
 * @n1: first string
 * @n2: second string
 * @len1: first length
 * @len2: second length
 * Return: nothing
 */
void multi(int *prod, char *n1, char *n2, int len1, int len2)
{
	int a, b, c, d, e;
	for (a = len1 - 1; a >= 0; a--)
	{
		e = 0;
		c = n1[a] - '0';
		for (b = len2 - 1; b >= 0; b--)
		{
			d = n2[b] - '0';
			e += prod[a + b + 1] + (c * d);
			prod[a + b + 1] = e % 10;
			e /= 10;
		}
		if (e > 0)
			prod[a + b + 1] += e;
	}
	a = 0;
	for (; prod[a] == 0 && a < len1 + len2; a++)
	{}
	if (a == len1 + len2)
		_putchar('0');
	for (; a < len1 + len2; a++)
		_putchar(prod[a] + '0');
	_putchar('\n');
}

/**
 * is_valid - number of valid
 * @num: number
 * Return: 0 if false, 1 if true
 */
int is_valid(char *num)
{
	int i = 0;

	for (; num[i]; i++)
	{
		if (num[i] < '0' || num[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * err - errors
 * @status: error for exit
 * Return: void
 */

void err(int status)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(status);
}
/**
 * main - get args
 * @argc: args
 * @argv: array
 * Return: integer
 */

int main( int argc, char **argv)
{
	int i;
	int j;
	int len1 = 0;
	int len2 = 0;
	int *s;

	if (argc != 3)
	{
		err(98);
	}
	for (i = 1; i < argc; i++)
	{
		if (!(is_valid(argv[i])))
			err(98);
		if (i == 1)
		{
			for (j = 0; argv[i][j]; j++)
				len2 += 1;
		}
	}
	s = int_calloc(len1 + len2, sizeof(int));
	if (s == NULL)
		err(98);
	multi(s, argv[1], argv[2], len1, len2);
	free(s);
	return (0);
}
