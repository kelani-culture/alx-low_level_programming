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
	char **p = &s;
	char **acc = &accept;

	while (**p != '\0')
	{
		int i = 0;

		while (*(*acc + i))
		{
			if (**p == *(*acc + i))
			{
				return (*p);
			}
			i++;
		}
		(*p)++;
	}
	if (*s == '\0')
	{
		return (*p);
	}
	return (NULL);
}
