#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index -  a function that deletes the node
 * @head: pointer
 * @index: location
 * Return: 1 on success. -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int add;
	listint_t *new;
	listint_t *old;

	if (head == NULL)
	{
		return (-1);
	}
	new = *head;
	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = new->next;
		free(new);
		return (1);
	}
	while (add != index)
	{
		old = new;
		new = new->next;
		if (new == NULL)
			return (-1);
		add += 1;
	}
	old->next = new->next;
	free(new);
	return (1);
}
