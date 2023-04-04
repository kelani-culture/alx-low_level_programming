#include <stdio.h>

/**
 * print_diagsums - calcuate the sum of a diagonal matrix
 *
 * @a: array pointer
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
	int i = 0, sum1 = 0, sum2 = 0;

	for (; i < size; i++)
	{
		sum1 += *(a + i*size + i);
		sum2 += *(a + i*size + (size -i -1);
	}
	printf("%d, %d\n", sum1, sum2);
}
