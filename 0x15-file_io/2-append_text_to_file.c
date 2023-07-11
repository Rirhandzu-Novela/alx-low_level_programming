#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - function that append text to the end of file
 * @filename: filename
 * @text_content: text content
 * Return: int
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i;
	int j;
	int k;

	if (filename == NULL)
		return (-1);

	i = open(filename, O_APPEND | O_WRONLY);
	if (i == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (j = 0; text_content[j] != '\0'; j++)
		;
		k = write(i, text_content, j);
		if (k == -1)
			return (-1);
	}
	close(i);
	return (1);
}
