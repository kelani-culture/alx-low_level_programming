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

		for (; half < len; half++)
		{
			_putchar(str[half]);
		}
	}
	else
	{
		half = (len - 1) / 2;

		for (; half < len; half++)
		{
			_putchar(str[half]);
		}
	}
}
