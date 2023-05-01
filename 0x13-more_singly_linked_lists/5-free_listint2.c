#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free allocate memory to list
 * @head: double pointer to list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
