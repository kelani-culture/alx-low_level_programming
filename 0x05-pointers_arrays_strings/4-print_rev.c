#include "main.h"
/**
 * print_rev - reverse string
 *
 * @s: string
 * return: void
 */
void print_rev(char *s)
{
	int x = 0, i = 0;

	while (s[i])
	{
		i++;
	}
	while (s[x])
	{
		_putchar([--i]);
		x++;
	}
	_putchar('\n');
}
