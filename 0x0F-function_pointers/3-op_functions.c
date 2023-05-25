#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - a function that add two int
 * @a: int 1
 * @b: int 2
 * Return: sum of the two int
 */

int op_add(int a, int b)
{
	int c = 0;

	c = a + b;
	return (c);
}

/**
 * op_sub - a function that subtract two int
 * @a: int 1
 * @b: int 2
 * Return: difference of the two int
 */

int op_sub(int a, int b)
{
	int d = 0;

	d = a - b;
	return (d);
}

/**
 * op_mul - a function that multiply two int
 * @a: int 1
 * @b: int 2
 * Return: product of the two int
 */

int op_mul(int a, int b)
{
	int e;

	e = a * b;
	return (e);
}

/**
 * op_div - a function that divide two int
 * @a: int 1
 * @b: int 2
 * Return: quotient of the two int
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - a function that divide two int
 * @a: int 1
 * @b: int 2
 * Return: remainder of the two int
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
