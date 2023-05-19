#include "main.h"
#include <stdlib.h>

/**
 * *array_range - function that creates an array of integers.
 * @min: minimum
 * @max: maximum
 * Return:  the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *a;
	int b;

	b = 0;

	if (min > max)
	{
		return (NULL);
	}
	a = malloc((max - min + 1) * sizeof(*a));
	if (a == NULL)
	{
		return (NULL);
	}

	while (min <= max)
	{
		a[b] = min;
		b++;
		min++;
	}
	return (a);
}
