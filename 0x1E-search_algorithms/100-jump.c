#include <stdio.h>
#include <math.h>

/**
 * jump_search - a function that performs a jump search algorithm
 * @array: array to search from
 * @size: size of the array
 * @value: target value we looking for
 * Return: return the target value if found else return -1
 *	if not found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t gap = floor(sqrt(size));
	size_t currentLastIndex = gap;
	size_t ind;

	if (!array)
		return (-1);
	printf("Value checked array[%d] = [%d]\n", 0, array[0]);
	while (currentLastIndex < size && value > array[currentLastIndex])
	{
		printf("Value checked array[%d] = [%d]\n",
				(int)currentLastIndex, array[currentLastIndex]);
		currentLastIndex += gap;

	}
	if (value == array[currentLastIndex])
	{
		size_t i = currentLastIndex - gap + 1;

		printf("Value found between indexes [%ld] and [%ld]\n",
				i - 1, currentLastIndex);
		while (i <= currentLastIndex)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			i++;
		}
		return (array[currentLastIndex]);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			currentLastIndex - gap, currentLastIndex);
	for (ind = currentLastIndex - gap; ind < currentLastIndex && ind < size;
			ind++)
	{
		printf("Value checked array[%ld] = [%d]\n", ind, array[ind]);
		if (value == array[ind])
			return (array[ind]);

	}
	return (-1);
}
