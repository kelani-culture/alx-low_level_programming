#include "variadic_functions.h"
#include <stdarg.h>
#include  <stdio.h>

/**
 * print_numbers - function that prints numbers, followed by a new line
 *
 * @separator: cahr separator value
 * @n: unsigned int
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, x;
	va_list args;

	va_start(args, n);

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			x = va_arg(args, int);
			printf("%d", x);

			if (i < n - 1)
				printf("%s", separator);
		}
		printf("\n");
	}
}
