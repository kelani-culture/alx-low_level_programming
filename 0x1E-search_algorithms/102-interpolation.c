#include <stdio.h>

/**
 * interpolation_search - a function that implement
 *				the Interpolation search algorithm
 * @array: a sorted array of integers
 * @size: size of the array
 * @value: value to search for
 * Return: return value if found else return -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t high = size - 1, low = 0, size_t probe;

	if (!array || size == 0)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		probe = low + (high - low) * (value - array[low]) /
			(array[high] - array[low]);

		printf("Value checked array[%d] = [%d]\n", (int)probe, array[probe]);
		if (value == array[probe])
			return (probe);

		else if (value > array[probe])
			low = probe + 1;
		else
			high = probe - 1;
	}
	printf("Value checked at array[%d] is out of range\n", probe);
	return (-1);
}
