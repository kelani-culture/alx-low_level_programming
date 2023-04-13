#include <stdlib.h>
#include "main.h"

/**
 * array_range -  function that creates an array of integers.
 *
 * @min: minimum value
 * @max: maximum value
 * Return: alloc
 */

int *array_range(int min, int max)
{
	int *alloc, i;
	size_t size = (max - min) + 1;

	if (min > max)
	{
		return (NULL);
	}

	alloc = malloc(sizeof(int *) * size);

	for (i = 0; i < size; i++)
	{
		alloc[i] = min + i;
	}
	return (alloc);
}
