#include "main.h"

/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int hash, index;

	for (hash = 1; hash <= size; hash++)
	{
		for (index = size - hash; index > 0; index--)
			_putchar(' ');
		for (index = 0; index < hash; index++)
			_putchar(35);
		if (hash < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
