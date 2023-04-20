#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print strings
 *
 * @separator: char separater val
 * @n: number of argument
 * Return: void;
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			str = va_arg(args, char *);
			printf("%s%s", str, i < n - 1 ? separator : "\n");
		}
	}
}
