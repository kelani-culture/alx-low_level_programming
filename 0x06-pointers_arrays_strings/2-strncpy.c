#include "main.h"

/**
 * _strncpy - copy string
 *
 * @src: source char
 * @dest: destination char
 * @n: bytes size
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n && *src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
