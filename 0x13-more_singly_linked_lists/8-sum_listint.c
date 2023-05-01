#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sum all element in the list
 * @head: pointer to head node
 * Return: sum of element
 */


int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	unsigned int sum = 0;

	if (temp == NULL)
		return (0);

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
