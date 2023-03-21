#include "main.h"

/**
 * _islower - Entry point
 *
 * Descriptions: takes in an integer parameter ofr the ascii value
 * @c: parameter for ascii value
 *
 * Return: Always 0 (success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
