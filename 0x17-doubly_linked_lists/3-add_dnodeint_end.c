#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - add node to the end
 * @head: pointer too the head node
 * @n: data to insert
 * Return: linked list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newNode;
		newNode->prev = temp->next;
		temp = newNode;
	}
	return (*head);
}
