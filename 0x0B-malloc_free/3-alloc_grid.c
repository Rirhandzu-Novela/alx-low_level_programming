#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid -  function that returns a pointer to a 2 dimensional array
 * @width: width of an array
 * @height: height of an array
 * Return: a pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int a;
	int b;
	int **s;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	s = (int **)malloc(sizeof(int *) * height);
	if (s == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		s[a] = (int *)malloc(sizeof(int) * width);
		if (s[a] == NULL)
		{
			for (b = 0; b < a; b++)
			{
				free(s[b]);
			}
			free(s);
			return (NULL);
		}
		for (b = 0; b < width; b++)
		{
			s[a][b] = 0;
		}
	}
	return (s);
}

