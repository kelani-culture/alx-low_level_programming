#include "main.h"
#include <stdlib.h>

/**
 * _realloc -  function that reallocates a memory block using malloc and free
 *
 * @ptr: pointer to string
 * @old_size: size of old memory
 * @new_size: size of new memory
 * Return: newPtr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newPtr;
	char *charPtr = (char *)ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		newPtr = malloc(new_size);

		if (newPtr == NULL)
		{
			return (NULL);
		}
		return (newPtr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	newPtr = malloc(new_size);
	if (newPtr == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		newPtr[i] = charPtr[i];
	}
	free(ptr);
	return (newPtr);
}
