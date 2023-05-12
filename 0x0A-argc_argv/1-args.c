#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int a;

	for (a = 0; a < argc; a++)
	{
	}
	printf("%d\n", a - 1);
	return (0);
}
