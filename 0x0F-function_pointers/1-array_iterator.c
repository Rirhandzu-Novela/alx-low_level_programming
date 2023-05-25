#include "function_pointers.h"
/**
 * array_iterator -  function that executes a function
 * @array: array
 * @size: size_t
 * @action: pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;

	if (action != NULL && array != NULL)
	{
		for (; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
	else if (action == NULL && array == NULL)
	{
		return;
	}
}
