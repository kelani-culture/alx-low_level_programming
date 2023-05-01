#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - remove first element of a list
 * @head: double pointer to start node
 * Return: popeted val
 */

int pop_listint(listint_t **head)
{
	listint_t *temp1 = *head;
	int pop;

	if (*head == NULL)
	{
		free(*head);
		return (0);
	}
	else
	{
		pop = temp1->n;
		*head = temp1->next;
		free(temp1);
	}
	return (pop);
}
