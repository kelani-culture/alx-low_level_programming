#include "main.h"

/**
 * more_numbers - print numbers upto 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int i = 0;
	int j = 0;

	while (i <= 10)
	{
		while (j <= 14)
		{
			if (j >= 9)
			{
				_putchar('0' + (j / 10);
			}
			_putchar('0' + (j % 10));
			j++;
		}
		i++;
	}
}
