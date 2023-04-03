#include "main.h"

/**
 * _memcpy - function that copies memory area.
 *
 * @dest: char pointer
 * @src: source char pointer
 * @n: number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
