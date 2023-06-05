#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * add_node_end - function that adds a new node at the end of a list
 * @head: pointer
 * @str: string
 * Return: new node at the end of a list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i;
	list_t *newnode;
	list_t *temp;

	i = 0;
	temp = *head;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	while (str[i])
		i += 1;

	newnode->len = i;
	newnode->str = strdup(str);
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = newnode;

	return (newnode);
}



