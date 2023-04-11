#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid -  function that returns a pointer to a 2
 *	*  dimensional array of integers
 *
 * @width: integer
 * @height: integer
 * Return: arr
 */

int **alloc_grid(int width, int height)
{
	int **arr, row, col;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	arr = (int **)malloc(height * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (row = 0; row < height; row++)
	{
		arr[row] = (int *)malloc(width * sizeof(int));
	}

	for (row = 0; row < height; row++)
	{
		for (col = 0; col < width; col++)
		{
			arr[row][col] = 0;
		}
	}
	return (arr);
}
