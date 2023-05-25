#include "variadic_functions.h"
#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: character to print
 * Return: on success 1
 * On errot, -1 is returned, and errno is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
