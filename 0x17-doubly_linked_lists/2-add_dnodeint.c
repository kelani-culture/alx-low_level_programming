#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint - add node to the beginning of a list
 * @head: pointer to the node
 * @n: data to insert
 * Return: linked list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head, *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;
	if (!*head)
	{
		*head = newNode;
	}
	else
	{
		newNode->next = temp;
		temp->prev = newNode;
		*head = newNode;
	}
	return (*head);
}
