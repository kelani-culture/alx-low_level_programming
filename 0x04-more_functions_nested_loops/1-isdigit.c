#include "main.h"

/**
 * _isdigit - checks is a character is digit
 *
 * @c: integer parameter
 *
 * Return: Always 0 (Success)
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
