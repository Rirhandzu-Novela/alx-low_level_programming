#include "main.h"

/**
 * _pow_recursion - function that returns the value of x to the power y
 * @x: int
 * @y: power
 * Return: value of x to the power y
 */

int _pow_recursion(int x, int y)
{
	int p = x;

	if (y < 0)
	{
		return (0);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		p *= _pow_recursion(x, --y);
	}
	return (p);
}
