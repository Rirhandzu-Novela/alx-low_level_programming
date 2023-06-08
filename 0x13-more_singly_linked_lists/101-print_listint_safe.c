#include "lists.h"
#include <stdlib.h>
/**
 * print_listint_safe - function that prints lists
 * @head: pointer
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t add;

	while (head)
	{
		printf("[%p} %d\n", (void *)head, head->n);
		add++;

		if (head > head->next)
		{
			head = head->next;
		}
		else
		{
			head = head->next;
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
	}
	return (add);
}
