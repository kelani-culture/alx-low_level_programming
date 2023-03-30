#include "main.h"

/**
 * _strcat - concatenate strings together
 *
 * @src: strings to concatenate from
 * @dest: string to contatenate to
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (*src != '\0')
	{
		*ptr = *src;

		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}
