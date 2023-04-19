#include "function_pointers.h"

/**
 * int _index -  a function that searches for an integer.
 *
 * @array: array int
 * @size: size of array
 * @cmp: function pointers
 * Retrun: index or -1if fail
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if(size <= 0)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]))
				return (index);
	}
	return (-1);
}
