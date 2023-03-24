#include "main.h"

/**
 * print_triangle - ptint triangle using octothorpe
 *
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int x, y, space;

	if (size > 0)
	{
		_putchar('\n');
	}

	for (x = 0; x <= size; x++)
	{
		for (space = size - x; space > 0; space--)
		{
			_putchar(' ');
		}
		for (y = 0; y <= x; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
