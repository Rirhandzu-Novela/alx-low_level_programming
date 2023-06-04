#include "lists.h"
/**
 * list_len - function that returns the number of elements
 * @h: pointer
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;

	while (h)
	{
		h = h->next;
		i += 1;
	}
	return (i);
}
