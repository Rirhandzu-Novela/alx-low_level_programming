#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * Return: int
 */

int get_endianness(void)
{
	int n = 1;

	return (*((char *) &n) + '0');
}
