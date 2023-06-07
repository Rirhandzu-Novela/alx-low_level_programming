#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - function that frees a listint
 * @head: pointer
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *fr;

	while (head != NULL)
	{
		fr = head;
		head = head->next;
		free(fr);
	}
	free(head);
}

