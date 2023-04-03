#include "main.h"
#define NULL ((void *)0)
/**
 * _strchr - function that locates a character in a string.
 *
 * @s: string s
 * @c: string c
 *
 * Return: s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
