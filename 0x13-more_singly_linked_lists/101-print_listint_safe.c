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
	const listint_t *currNode = head;

	while (currNode != NULL)
	{
		printf("[%p] [%d]\n", (void *)currNode, currNode->n);
		count++;

		if (currNode <= currNode->next)
		{
			printf("[%p] [%d]\n", (void *)currNode, currNode->n);
			exit(98);
		}
		currNode = currNode->next;
	}
	return (count);
}
