#include <stdio.h>
#include "main.h"

/**
 * main - program that prints all arguments it receives
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
