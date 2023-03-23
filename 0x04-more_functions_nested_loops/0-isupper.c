#include "main.h"

/**
 * _isupper - main entry points
 *@c: char to be checked
 *
 * Return: void
 */

int _isupper(int c)
{

	char ch;

	if (ch >= 'A' && ch <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
