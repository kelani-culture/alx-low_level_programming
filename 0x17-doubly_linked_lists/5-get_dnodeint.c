#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - get node at index
 * @head: pointer to head list
 * @index: to get
 * Return: list in given index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *head_ref = head;
	unsigned int len = 0, i;

	if (!head)
		return (NULL);
	while (head_ref != NULL)
	{
		head_ref = head_ref->next;
		len++;
	}
	if (index > len - 1)
		return (NULL);
	head_ref = head;

	if (index == 0)
		return (head);
	for (i = 1; i < len && head_ref != NULL; i++)
	{
		head_ref = head_ref->next;
		if (index == i)
			break;
	}
	return (head_ref);
}
