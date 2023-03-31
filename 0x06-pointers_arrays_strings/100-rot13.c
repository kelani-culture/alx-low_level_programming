#include "main.h"

/**
 * rot13 - a function that encodes a string using
 *
 * @str: character
 * Return: str
 */

char *rot13(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		while (*ptr >= 'A' && *ptr <= 'Z' || *ptr >= 'a' && *ptr <= 'z')
		{
			if (*ptr >= 'A' && *ptr <= 'M' || *ptr >= 'a' && *ptr <= 'm')
			{
				*ptr += 13;
				break;
			}
			*ptr -= 13;
			break;
		}
		ptr++;
	}
	return (str);
}
