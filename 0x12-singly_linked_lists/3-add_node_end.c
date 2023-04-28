#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a linked list
 *
 * @head: pointer to the head of the list
 * @str: string to be added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lastNode, *newNode;
	int lent = 0;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	while (str[lent])
		lent++;

	newNode->len = lent;

	lastNode = *head;
	while (lastNode != NULL && lastNode->next != NULL)
	{
		lastNode = lastNode->next;
	}

	if (lastNode == NULL)
	{
		*head = newNode;
	}
	else
	{
		lastNode->next = newNode;
	}
	return (newNode);
}
