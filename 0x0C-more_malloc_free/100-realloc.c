#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - function that reallocates a memory block using
 * @ptr - pointer
 * @old_size: size
 * @new_size: size
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
