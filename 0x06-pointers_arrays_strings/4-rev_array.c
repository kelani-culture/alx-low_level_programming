#include "main.h"

/**
 * reverse_array - reverse value in an array
 *
 * @a: pointer integer
 * @n: size of array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int *start_ptr = a;
	int *end_ptr = a + n - 1; /* the first array added to the size of the the array -1 gives the last element of the array*/
	int temp;

	while (end_ptr > start_ptr)
	{
		temp = *start_ptr;
		*start_ptr = *end_ptr;
		*end_ptr = temp;

		start_ptr++;
		end_ptr--;
	}
}
