#include "lists.h"
#include <stdlib.h>
/**
 * reverse_listint - function that reverse
 * @head: pointer
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *i;
	listint_t *j;

	i = NULL;
	j = NULL;

	while (*head != NULL)
	{
		j = (*head)->next;
		(*head)->next = i;
		j = *head;
		*head = j;
	}
	*head = i;
	return (*head);
}
