#include <stdio.h>
/**
 * binary_search - implement a binary search on an array
 * @array: array containing element
 * @size: size of array
 * @value: value to search for
 * Return: value if found else return -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t high = size - 1, low = 0, mid, i;

	if (!array)
		return (-1);
	while (low < high)
	{
		printf("searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i == high)
			{
				printf("%d\n", array[i]);
				break;
			}
			printf("%d, ", array[i]);
		}
		mid = low + (high - low) / 2;

		if (array[mid] == value)
			return (array[mid]);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
