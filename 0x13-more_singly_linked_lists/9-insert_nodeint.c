#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - function that inserts a new node
 * @head: pointer
 * @index: index
 * @n: number
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *nwnode, *i;
	unsigned int j;

	j = 0;

	nwnode = malloc(sizeof(listint_t));
	if (!nwnode)
	{
		return (NULL);
	}
	nwnode->n = n;

	if (*head == NULL)
	{
		*head = nwnode;
		nwnode->next = NULL;
		return (nwnode);
	}

	i = *head;
	while (j < (index - 1) && i->next)
	{
		i = i->next;
		j += 1;
	}
	if (j < index - 1)
	{
		return (NULL);
	}
	nwnode->next = i->next;
	i->next = nwnode;
	return (nwnode);
}
