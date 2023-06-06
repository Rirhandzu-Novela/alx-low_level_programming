#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - function that frees a listint
 * @head: pointer
 * Return: void
 */
void free_listint(listint_t *head)
{
	while (head != 	NULL)
	{
		head = head->next;
		free(head);
	}
	free(head);
}

