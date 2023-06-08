#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - function that free a listint_t list
 * @h: pointer
 * Return: size
 */
size_t free_listint_safe(listint_t **h)
{
	size_t add;
	listint_t *new;
	listint_t *old;

	new = *h;

	while (new != NULL)
	{
		add += 1;
		new = new->next;
		old =new;
		free(old);

		if (old < new)
			break;
	}
	*h = NULL;
	return (add);
}

