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
	unsigned int count = 0;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);


	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (currNode);
	}

	while (currNode && count < idx - 1)
	{
		currNode = currNode->next;
		count++;
	}
	if (!currNode)
	{
		free(newNode);
		return (NULL);
	}
	newNode->next = currNode->next;
	currNode->next = newNode;
	return (newNode);
}
