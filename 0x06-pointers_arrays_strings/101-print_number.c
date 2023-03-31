#include "main.h"

/**
 * print_number - print ingeger numbers
 *
 * @n: integer
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	if (n > 9)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
