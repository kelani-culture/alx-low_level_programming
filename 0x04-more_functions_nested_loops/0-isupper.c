#include "main.h"

/**
 * _isupper - main entry points
 *@c: char to be checked
 *
 * Return: void
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
