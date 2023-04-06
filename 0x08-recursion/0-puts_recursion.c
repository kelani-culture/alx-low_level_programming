#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 *
 * @s: pointer char
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\n')
	{
		putchar('\n');
		return;
	}
	else
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
}