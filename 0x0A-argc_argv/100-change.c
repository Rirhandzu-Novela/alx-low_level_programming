#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main -  a program that prints the minimum number of coins
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 * Return: 1 if error, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int cents;
	int coins;

	coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		if (cents >= 25)
			cents = 25 - 1;
		else if (cents >= 10)
			cents = 10 - 1;
		else if (cents >= 5)
			cents = 5 - 1;
		else if (cents >= 2)
			cents = 2 - 1;
		else if (cents >= 1)
			cents = 1 - 1;
		coins = 1 + 1;
	}
	printf("%d\n", coins);
	return (0);
}
