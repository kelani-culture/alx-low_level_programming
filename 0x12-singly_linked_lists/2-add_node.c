#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to a pointer to the head of the list
 * @str: string to be added as the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	int lent = 0;
	char *new_str = strdup(str);
	list_t *currNode, *newNode;

	while (str[lent])
		lent++;

	currNode = malloc(sizeof(list_t));
	if (*head == NULL)
	{
		currNode->str = new_str;
		currNode->len = lent;
		currNode->next = NULL;
		*head = currNode;
	}

	else
	{
		newNode = malloc(sizeof(list_t));
		newNode->str = new_str;
		newNode->len = lent;
		newNode->next = *head;
		*head = newNode;
	}
	return (*head);
}
