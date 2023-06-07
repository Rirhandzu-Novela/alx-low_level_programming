#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - a function that frees a listint_t
 * @head: pointer
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *fr;

	fr = *head;

	while (fr != NULL)
	{
		*head = fr;
		fr = fr->next;
		free(fr);
	}
	head = NULL;
	free(*head);
}
