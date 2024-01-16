#include <stdio.h>

/**
 * linear_search - a function that performs linear search
 * @array: pointer to the first element in the array
 * @size: size of the array
 * @value: value to search for
 * Return: value if found else return -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);

	while (i < size) {
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		if (array[i] == value)
			return array[i];
		i++;
	}
	return (-1);
}
