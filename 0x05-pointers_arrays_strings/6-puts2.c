#include "main.h"

/**
 * puts2 - print all even characters in a string
 *
 * @str: char
 * return: void
 */

void puts2(char *str)
{
	int even = 0;

	while (str[even])
	{
		if (even % 2 == 0)
		{
			_putchar(str[even]);
		}
		even++;
	}
	_putchar('\n');
}
