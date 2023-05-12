#include "main.h"

/**
 * factorial - function that returns the factorial of a given number.
 * @n: number
 * Return: factorial of n.
 */
int factorial(int n)
{
	int f = n;

	if (n < 0)
	{
		return (-1);
	}
	else if (n >= 0 && n <= 1)
	{
		return (1);
	}
	else
	{
		f *= factorial(n - 1);
	}
	return (f);
}
