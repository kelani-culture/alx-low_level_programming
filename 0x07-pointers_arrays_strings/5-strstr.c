#include "main.h"
#define NULL ((void *)0)
/**
 * _strstr - function that locates a substring
 *
 * @haystack: string pointer
 * @needle: string pointer
 * Return: needle
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	while (haystack[i])
	{
		j = 0;

		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
			j++;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
		i++;
	}
	return (NULL);
}
