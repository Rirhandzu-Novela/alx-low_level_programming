#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that prints strings
 * @separator: string
 * @n: number of strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list string;
	char *s;

	i  = 0;

	for (; i < n; i++)
	{
		s = va_arg(string, char *);

		if (s == NULL)
		{
			printf("(nil");
		}
		else if (s != NULL)
		{
			printf("%s", s);
		}
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(string);
}
