#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that duplicate a string
 *
 * @str: string to duplicate
 * Return: chr
 */
int strL(char *str);

char *_strdup(char *str)
{
	char *chr;
	int i, len = strL(str);

	if (str == NULL)
		return (NULL);

	chr = (char *)malloc(len * sizeof(char));

	if (chr == NULL)
	{
		return (NULL);
	}

	for (i = 0;  i <= len; i++)
		chr[i] = str[i];

	return (chr);
}

/**
 * strL - calculate length of string
 *
 * @str: string to count
 * Return: length of string
 */

int strL(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + strL(str + 1));
}
