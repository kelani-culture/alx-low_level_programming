#include "main.h"

/**
 * print_square - print square
 * @size: integers
 *
 * Return: void
 */


void print_square(int size)
{
	int r, c;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (r = 1; r <= size; r++)
	{
		for (c = 1; c <= size; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
