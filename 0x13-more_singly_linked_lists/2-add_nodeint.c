#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - function that adds a new node at the beginning of a listint_t
 * @head: pointer
 * @n: integer
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nwnode;
	
	nwnode = malloc(sizeof(listint_t));
	if (!nwnode)
	{
		return (NULL);
	}
	nwnode->n = n;
	nwnode->next = (*head);
	(*head) = nwnode;

	return (*head);
}
