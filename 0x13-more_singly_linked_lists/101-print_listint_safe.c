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
			 -Wall -pedantic -Werror -Wextra -std=gnu89 101-main.c 2-add_nodeint.c 101-print_listint_safe.c -o m
			printf("-> [%p] %d\n", (void *)head, head->);
			break;
		}
	}
	return (add);
}
