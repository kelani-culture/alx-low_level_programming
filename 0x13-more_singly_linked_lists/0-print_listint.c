#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print linked list ineteger
 *
 * @h: pointer to list
 * Return: number of element in list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
