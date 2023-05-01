#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - add node to the end of list
 * @head: double pointer to head of list
 * @n: integer element to lists
 * Return: appended node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *currNode, *lastNode;

	currNode =  malloc(sizeof(listint_t));

	if (currNode == NULL)
		return (NULL);

	currNode->n = n;
	lastNode = *head;

	while (lastNode != NULL && lastNode->next != NULL)
	{
		lastNode = lastNode->next;
	}
	if (lastNode == NULL)
	{
		*head = currNode;
	}
	else
	{
		lastNode->next = currNode;
	}
	return (currNode);
}
