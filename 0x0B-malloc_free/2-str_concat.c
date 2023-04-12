#include <stdlib.h>
#include "main.h"
#define NULL ((void *)0)

/**
 * str_concat - concatenate string together
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: chr
 */

char *str_concat(char *s1, char *s2)
{
	int i, j = 0, len = 0;
	char *chr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; i < s1[i] || s2[i]; i++)
		len++;

	chr = (char *)malloc((len) * sizeof(char));

	if (chr == NULL)
		return (NULL);

	for (i = 0; i < s1[i]; i++)
	{
		chr[j++] = s1[i];
	}

	for (i = 0; i < s2[i]; i++)
	{
		chr[j++] = s2[i];
	}

	return (chr);
}
