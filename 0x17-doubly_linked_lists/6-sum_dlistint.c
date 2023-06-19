#include "lists.h"
#include <stdio.h>

/**
 * sum_dlistint - sum linked list
 * @head: pointer to head node
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *head_ref = head;

	if (!head)
		return (0);

	while (head_ref != NULL)
	{
		sum += head_ref->n;
		head_ref = head_ref->next;
	}
	return (sum);
}
