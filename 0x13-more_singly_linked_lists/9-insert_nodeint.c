#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at nth position
 * @head: double pointer to thead node
 * @idx: index to insert to
 * @n: value to insert to
 *
 * Return: linked list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *currNode = *head;
	unsigned int count = 0, i;

	while (currNode != NULL)
	{
		count++;
		currNode = currNode->next;
	}

	if (idx >= count)
		return (NULL);

	newNode = (listint_t *)malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	currNode = *head;
	if (idx == 0)
	{
		newNode->next = currNode;
		currNode = newNode;
		return (currNode);
	}

	for (i = 0; i < idx - 1; i++)
	{
		currNode = currNode->next;
	}
	newNode->next = currNode->next;
	currNode->next = newNode;
	return (newNode);
}
