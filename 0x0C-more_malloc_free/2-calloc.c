#include <stdlib.h>
#include "main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc.
 *
 * @nmemb: unsigned int
 * @size: unsigned int
 *
 * Return: alloc
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *alloc;
	char *bytes_ptr;
	size_t i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	alloc = malloc(nmemb * size);
	if (alloc == NULL)
		return (NULL);

	else
	{
		byte_ptr = (char *)alloc;

		for (i = 0; i < (nmemb * size); i++)
		{
			bytes_ptr[i] = 0;
		}
	}

	return (alloc);
}
