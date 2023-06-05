#include <stdlib.h>
#include <stdio.h>
/**
 * main - function that print opcodes
 * @argc: arguments
 * @argv: argument array
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	char *s;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	s = (char *)&main;
	j = atoi(argv[1]);
	i = 0;

	while (i < j - 1)
	{
		printf("%02hhx ", s[i]);
		i += 1;
	}
	printf("%02hhx\n", s[i]);
	return (0);
}
