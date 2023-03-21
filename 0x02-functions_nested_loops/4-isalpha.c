#include "main.h"
/**
 * _isalpha - Entry point
 *
 * Descriptions: _isalpha takes in an int param as ascii value
 *
 * Return: Always 0 (success)
 */


int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
