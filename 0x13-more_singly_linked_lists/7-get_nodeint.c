#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t
 * @head: pointer
 * @index: index of the node
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;

	while (i != index)
	{
		head = head->next;
		if (head == NULL)
		{
			return (NULL);
		}
		i += 1;
	}
	return (head);
}
