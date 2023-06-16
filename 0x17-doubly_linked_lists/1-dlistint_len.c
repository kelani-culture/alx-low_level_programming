#include "lists.h"

/**
 * dlistint_len - calculate len of list
 * @h: pointer to the first element
 * Return: lenght of list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *temp = h;

	if (!h)
		return (0);
	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}
	return (len);
}
