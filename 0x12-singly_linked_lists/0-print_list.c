#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: pointer of head of  a list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t list;

	list = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		list += 1;
	}
	return (list);
}

