#include "lists.h"
/**
 * sum_listint - function that returns the sum
 * @head: pointer
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int count;

	count = 0;

	while (head != NULL)
	{
		count += head->n;
		head = head->next;
	}
	return (count);
}
