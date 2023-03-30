#include "main.h"

/**
 * _strncat - concatenate strings
 *
 * @dest: destination char
 * @src: source char
 * @n: integer specifies the maximum number of bytes to copy
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i = 0;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (i < n && *src != '\0')
	{
		*ptr = *src;
		src++;
		ptr++;
		i++;
	}
	return (dest);

}
