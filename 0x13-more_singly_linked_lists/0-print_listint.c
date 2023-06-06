#include "lists.h"
/**
 * print_listint -  function that prints all the elements of a listint_t
 * @h: pointer
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i;

	i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i += 1;
	}
	return (i);
}
