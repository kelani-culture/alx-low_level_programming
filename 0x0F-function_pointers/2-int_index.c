#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index -  a function that searches for an integer.
 *
 * @array: array int
 * @size: size of array
 * @cmp: function pointers
 * Return: index or -1 if fail
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]))
		{
			return (index);
		}
	}
	return (-1);
}
