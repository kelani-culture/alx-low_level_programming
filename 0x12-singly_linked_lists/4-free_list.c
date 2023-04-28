#include <stdlib.h>
#include "lists.h" 

/**
 * free_list - deallocate linked list
 *
 * @head: pointer to linked list
 */

void free_list(list_t *head)
{
	list_t curr;

	while (head != NULL)
	{
		free(head->str);
		curr = head->next;
		free(head);
		head = next;
	}
}
