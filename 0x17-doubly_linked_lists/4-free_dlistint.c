#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free allocated meemory for list
 * @head: pointer to head node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *head_ref = head;

	while (head_ref != NULL)
	{
		free(head_ref);
		head_ref = head_ref->next;
	}
}
