#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list -  function that frees a list_t list
 * @head: pointer
 * Return: void
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
	{
		free_list(head->next);
	}
	free(head->str);
	free(head);
}
