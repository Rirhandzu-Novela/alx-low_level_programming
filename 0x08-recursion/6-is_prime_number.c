#include "main.h"

/**
 * prime - checks if prime number
 * @n: number
 * @i: primer
 * Return: prime number - 1, otherwise 0
 */

int prime(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	if (i == n / 2)
	{
		return (1);
	}
	else
	{
		return (prime(n, i + 1));
	}
}

/**
 * is_prime_number - function returns 1 if prime number, otherwise return 0
 * @n: number
 * Return: prime number - 1, otherwise 0
 */

int is_prime_number(int n)
{

	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (prime(n, 2));
	}
}
