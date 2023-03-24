#include "main.h"

/**
 * more_numbers - print numbers upto 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int height, width;

	for (height = 0; height <= 10; height++)
	{
		for (width = 0; width <= 14; width++)
		{
			if (width > 9)

				_putchar((width / 10) + '0');
			_putchar((width % 10) + '0');
		}
		_putchar('\n');
	}
}
