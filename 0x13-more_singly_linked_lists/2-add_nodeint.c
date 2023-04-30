#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add new node to the list
 *
 * @head: double pointer to start pointer
 * @n: element to add to the list
 * Return: return node to the list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *currNode, *newNode;

	if (*head == NULL)
	{
		currNode = malloc(sizeof(listint_t));
		if (currNode == NULL)
			return (NULL);

		currNode->n = n;
		currNode->next = NULL;
		*head = currNode;
	}
	else
	{
		newNode = malloc(sizeof(listint_t));
		if (newNode == NULL)
			return (NULL);

		newNode->n = n;
		newNode->next = *head;
		*head = newNode;
	}
	return (newNode);
}
