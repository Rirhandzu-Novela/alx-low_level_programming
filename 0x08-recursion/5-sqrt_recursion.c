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
	else if ((sqrt * sqrt) > i)
	{
		return (-1);
	}
	return (square_root(i, sqrt + 1));
}

/**
 * _sqrt_recursion -  function that returns the natural square root of a number
 * @n: number
 * Return: square root of a number
 */

int _sqrt_recursion(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (square_root(n, 1));
}
