#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function that deletes head
 * @head: pointer
 * Return: int
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *nwnode;

	nwnode = *head;
	if (nwnode == NULL)
	{
		return (0);
	}

	i = nwnode->n;
	*head = nwnode->next;
	free(nwnode);
	return (i);
}
