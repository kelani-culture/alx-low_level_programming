#include "main.h"

/**
 * print_last_digit - main entry point
 *
 * @n: number to be computed
 * Return: Always 0 (success)
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (n < 0)
	{
		last_digit *= -1;
	}
	_putchar(last_digit + '0');
}
