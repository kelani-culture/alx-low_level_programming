#include <stdio.h>
#include <main.h>

/**
 * print_array - a function that prints n elements of an array of integers
 *
 * @a: pointer
 * @n: integer
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);

		if (i != (n - 1))
		{
			_putchar(',');
			_putchar(' ');
		}
		i++;
}
