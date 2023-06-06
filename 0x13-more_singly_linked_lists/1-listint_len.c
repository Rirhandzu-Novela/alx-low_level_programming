#include "lists.h"
/**
 * listint_len -  function that returns the number of elements
 * @h: pointer
 * Return: int
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;

	while (h != NULL)
	{
		h = h->next;
		i += 1;
	}
	return (i);
}
