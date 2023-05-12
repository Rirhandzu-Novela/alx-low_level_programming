#include "main.h"

/**
 * square_root - function that find the squareroot
 * @i: number
 * @sqrt: the squareroot
 * Return: squareroot
 */

int square_root(int i, int sqrt)
{
	if ((sqrt * sqrt) == i)
	{
		return (sqrt);
	}
	if (sqrt == i / 2)
	{
		return (-1);
	}
	else
	{
		return (square_root(i, sqrt + 1));
	}
}

/**
 * _sqrt_recursion -  function that returns the natural square root of a number
 * @n: number
 * Return: square root of a number
 */

int _sqrt_recursion(int n)
{
	int sqrt = n;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (square_root(n, sqrt));
	}
}
