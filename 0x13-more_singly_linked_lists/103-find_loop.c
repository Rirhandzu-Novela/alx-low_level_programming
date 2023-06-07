#include "lists.h"
#include <stdlib.h>
/**
 * find_listint_loop - function that find the loop inside a list
 * @head: pointer
 * Return: address where the first loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *loop;

	while (head != NULL)
	{
		loop = head;
		head = head->next;
		if (loop < head)
			return (head);
	}
	return (NULL);
}
