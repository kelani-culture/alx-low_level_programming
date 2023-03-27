#include "main.h"

/**
 * _strlen - main entry points
 *
 * Descriptions: return the length of a string
 * @s: string
 *
 * return: the lenth of string s
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
