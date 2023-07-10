#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile -  function that reads a text file and prints it
 * @filename: source file
 * @letters: number of letter
 * Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	int j;
	char *c = malloc(sizeof(char *) * letters);

	if (!c)
		return (0);

	if (!filename)
		return (0);

	i = open(filename, O_RDONLY, 0600);
	if (i == -1)
		return (0);

	j = read(i, c, letters);
	write(STDOUT_FILENO, c, j);

	free(c);
	close(i);
	return (j);
}
