#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - remove first element of a list
 * @head: double pointer to start node
 * Return: popeted val
 */

int pop_listint(listint_t **head)
{
	listint_t *temp1, *temp2;
	int pop;

	if (*head == NULL)
	{
		free(*head);
		return (0);
	}
	else
	{
		pop = temp1->n;
		temp2 = temp1->next;
		free(temp1);
		*head = temp2;
	}
	return (pop);
}
