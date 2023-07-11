#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define MAXSIZE 1024
#define SE STDERR_FILENO

/**
 * main - program that copies a content of a file
 * @ac: count
 * @av: arguments
 * Return: int
 */

int main(int ac, char *av[])
{
	int i, j, k, l;
	char c[MAXSIZE];
	mode_t mode;

	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	if (ac != 3)
		dprintf(SE, "Usage: cp file_from file_to\n"), exit(97);
	i = open(av[1], O_RDONLY);
	if (i == -1)
		dprintf(SE, "Error: Can't read from file %s\n", av[1]), exit(98);
	j = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (j == -1)
		dprintf(SE, "Error: Can't write to %s\n", av[2]), exit(99);
	do {
		k = read(i, c, MAXSIZE);
		if (k == -1)
		{
			dprintf(SE, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}

		if (k > 0)
		{
			l = write(j, c, (ssize_t) k);
			if (l == -1)
			{
				dprintf(SE, "Error: Can't write to %s\n", av[2]);
				exit(99);
			}
		}
	} while (k > 0);
	k = close(i);
	if (k == -1)
		dprintf(SE, "Error: Cann't close fd %d\n", i), exit(100);
	l = close(j);
	if (l == -1)
		dprintf(SE, "Error: Can't close fd %d\n", j), exit(100);
	return (0);
}
