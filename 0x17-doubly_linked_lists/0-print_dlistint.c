#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint - print a double linked list
 * @dlistint_t: pointer to linked list
 * Return: list
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t len = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		len++;
	}
	return (len);
}
