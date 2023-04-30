#include <stdio.h>
#include "lists.h"

/**
 * listint_len - count number of element in list
 * @h: pointer to list
 * Return: count of list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
