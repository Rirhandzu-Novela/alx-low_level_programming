#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - function that add new node
 * @head: pointer
 * @n: integer
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nwnode;
	listint_t *elem;

	elem = *head;

	nwnode = malloc(sizeof(listint_t));
	if (nwnode == NULL)
	{
		return (NULL);
	}

	nwnode->n = n;
	nwnode->next = NULL;

	if (*head == NULL)
	{
		*head = nwnode;
		return (nwnode);
	}

	while (elem->next != NULL)
		elem = elem->next;

	elem->next = nwnode;

	return (nwnode);
}
