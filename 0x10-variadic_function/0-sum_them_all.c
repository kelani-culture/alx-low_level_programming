#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - sum all integers
 *
 * @n: number of args
 * Return: s
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	va_start(args, n);
	int i, x, s = 0;

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);
		s += x;
	}
	va_end(args);
	return (s);
}
