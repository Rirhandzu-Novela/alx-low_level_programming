#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
 * main -  a program that adds positive numbers.
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int sum;

	sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
