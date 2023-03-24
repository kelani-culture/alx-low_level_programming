#include "main.h"

/**
 * print_diagonal - print diagonal lines
 * @n: integer
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i,j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
