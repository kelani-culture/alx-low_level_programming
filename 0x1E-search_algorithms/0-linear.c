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
	size_t ind = 0;

	if (!array)
		return (-1);

	while (ind < size)
	{
		printf("Value checked array[%u] = [%d]\n", (unsigned int)ind, array[ind]);
		if (array[ind] == value)
			return (ind);
		ind++;
	}
	return (-1);
}
