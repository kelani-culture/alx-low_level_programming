#include "main.h"

/**
 * puts_half - split string into half
 *
 * @str: character
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0, half = 0;

	while (str[len])
	{
		len++;
	}

	if (len % 2 == 0)
	{
		half = len / 2;

		for (; str[half]; half++)
		{
			_putchar(str[half]);
		}
	}
	else
	{
		half = ((len - 1) / 2) + 1;

		for (; str[half]; half++)
		{
			_putchar(str[half]);
		}
	}
	_putchar('\n');
}
