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
	int *alloc;
	unsigned int i;
	size_t size = (max - min);

	if (min > max)
	{
		return (NULL);
	}

	alloc = malloc((sizeof(int) * size) + sizeof(int));
	if (alloc == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		alloc[i] = min++;
	}
	return (alloc);
}
