#include "main.h"
#define NULL ((void *)0)

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @s: source pointer
 * @accept: string pointer
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		i = 0;

		while (accept[i] != '\0')
		{
			if (*s == accept[i])
			{
				return (s);
			}
			i++;
		}
		s++;
	}
	return (NULL);
}
