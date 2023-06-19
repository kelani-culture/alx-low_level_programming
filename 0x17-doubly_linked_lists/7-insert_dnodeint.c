#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - insert at a given index
 * @h: pointer to head node
 * @idx: index of node
 * @n: data to insert
 * Return: linked list
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head_ref = *h, *temp, *newNode;
	unsigned int len = 0, i;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	while (head_ref != NULL)
	{
		head_ref = head_ref->next;
		len++;
	}
	newNode->n = n;
	if (idx > len - 1)
		return (NULL);
	head_ref = *h;
	if (idx == 0)
		add_dnodeint(h, n);
	else if (idx == len - 1)
		add_dnodeint_end(h, n);
	else
	{
		i = 1;
		while (i < idx)
		{
			head_ref = head_ref->next;
			i++;
		}
		temp = head_ref->next;
		newNode->prev = head_ref;
		newNode->next = head_ref->next;
		head_ref->next = newNode;
		temp->prev = newNode;
	}
	return (*h);
}
