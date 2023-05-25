#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - function that  print numbers
 * @separator: string
 * @n: arguments
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i;

	i = 0;

	va_start(a, n);
	for (; i < n; i++)
	{
		printf("%d", va_arg(a, int));
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(a);
}
