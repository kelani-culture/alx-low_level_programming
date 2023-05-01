#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - get ther index of a node
 * @head: ppointer to heaed node
 * @index: node index
 * Return: node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp1 = head;
	listint_t *temp2;
	unsigned int i, count = 0;

	while (temp1 != NULL)
	{
		temp1 = temp1->next;
		count++;
	}
	if (index >= count)
		return (NULL);

	if (index == 0)
		return (head);

	temp1 = head;
	for (i = 0; i < index - 1; i++)
	{
		temp1 = temp1->next;
	}
	temp2 = temp1->next;
	return (temp2);
}
