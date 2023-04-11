#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenate string together
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: chr
 */

int len(char *s1);
char *_strcat(char *s1, char *s2);

char *str_concat(char *s1, char *s2)
{
	char *chr;
	unsigned int i, len1, len2;

	if (s1 == NULL)
	{
		s1 = (char *)malloc(sizeof(char));
		s1[0] = '\0';
	}
	if (s2 == NULL)
	{
		s2 = (char *)malloc(sizeof(char));
		s2[0] = '\0';
	}
	len1 = len(s1);
	len2 = len(s2);

	chr = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	for (i = 0; i < len1; i++)
	{
		chr[i] = s1[i];
	}
	_strcat(chr, s2);
	return (chr);
}

/**
 * len -  count length
 *
 * @s1: string to count
 * Return: length of string
 */

int len(char *s1)
{
	if (*s1 == '\0')
	{
		return (0);
	}

	else
	{
		return (1 + len(s1 + 1));
	}
}

/**
 * _strcat - concat two strings
 *
 * @s1: destination to concat to
 * @s1: to append from
 * Return: dest
 */

char *_strcat(char *s1, char *s2)
{
	int dest_len = len(s1), i;

	for (i = 0; s2[i] != '\0'; i++)
	{
		s1[dest_len + i] = s2[i];
	}
	return (s1);
}
