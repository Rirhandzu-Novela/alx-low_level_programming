#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints eveything
 * @format: format for printing
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list list;
	char *s;
	unsigned int i, j;

	i = 0;

	while (format)
	{
		va_start(list, format);
		while (format[i])
		{
			j = 1;
			switch (format[i])
			{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				s = va_arg(list, char *);
				if (!s)
					s = "(nil)";
				printf("%s", s);
				break;
			default:
				j = 0;
				break;
			}
		if (format[i + 1] && j)
			printf(", ");
		i += 1;
		}
		va_end(list);
		break;
	}
	printf("\n");
}

