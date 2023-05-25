#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: extra parameters
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list vlist;
	unsigned int i;
	unsigned int sum;

	i = sum =  0;

	va_start(vlist, n);
	if (n == 0)
	{
		return (0);
	}
	for (; i < n; i++)
	{
		sum += va_arg(vlist, const unsigned int);
	}

	va_end(vlist);
	return (sum);
}
