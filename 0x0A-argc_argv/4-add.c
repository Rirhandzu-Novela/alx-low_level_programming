#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main -  a program that adds positive numbers.
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int a;
	int add;

	add = 0;

	if (argc < 1)
	{
		return (0);
	}
	else
	{
		for (a = 1; a < argc; a++)
		{
			if (!atoi(argv[a]))
			{
				printf("%s\n", "Error");
				return (1);
			}
			add = 1 +  atoi(argv[a]);
		}
		printf("%d\n", add);
		return (0);
}
