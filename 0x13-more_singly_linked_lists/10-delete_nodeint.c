#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at given index
 * @head: double pointer to head
 * @index: position to delete
 * Return: 1 if success -1 if fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nextNode, *temp = *head;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp && count < index - 1)
	{
		temp = temp->next;
		count++;
	}
	if (!temp)
		return (-1);

	nextNode = temp->next;
	temp->next = nextNode->next;
	free(nextNode);
	return (1);
}
