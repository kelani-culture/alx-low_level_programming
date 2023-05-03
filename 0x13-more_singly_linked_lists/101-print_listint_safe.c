#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_listint_safe -  a function that prints a listint_t linked list.
 * @head: pointer to head node
 * Return: count
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		head = head->next;
	}
	return (count);
}
