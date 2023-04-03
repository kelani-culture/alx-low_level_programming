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
	char **src = &s;
	char **acc = &accept;

	while (**src != '\0')
	{
		int i = 0;

		while (*(*acc + i))
		{
			if (**src  == *(*acc + i))
			{
				return (*src);
			}
			i++;
		}
		(*src)++;
	}
	if (**src == '\0')
	{
		return (*src);
	}
	return (NULL);
}
