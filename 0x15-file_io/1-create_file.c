#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * create_file - function that creates a file
 * @filename: name of a file
 * @text_content: content
 * Return: int
 */

int create_file(const char *filename, char *text_content)
{
	int i;
	int j;
	int k;

	if (filename == NULL)
		return (-1);

	i = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (i == -1)
		return (-1);

	if (text_content)
	{
		for (k = 0; text_content[k] != '\0'; k++)
			;
		j = write(i, text_content, k);
		if (j == -1)
			return (-1);
	}

	close(i);
	return (1);
}
