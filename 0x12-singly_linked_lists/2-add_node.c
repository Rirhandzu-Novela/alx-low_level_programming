#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * add_node - unction that adds a new node
 * @head: node head
 * @str: string
 * Return: new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int i;

	i = 0;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	while (str[i])
		i += 1;

	newnode->len = i;
	newnode->str = strdup(str);
	newnode->next = (*head);

	(*head) = newnode;

	return (*head);
}
