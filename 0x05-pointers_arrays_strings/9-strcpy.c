#include "main.h"

/**
 *  *_strcpy - copy string
 *
 *  @dest: string
 *  @src: string
 *
 *  Return: character
 */

char *_strcpy(char *dest, char *src)
{
	int j, len;

	for (len = 0; src[len] != '\0'; len++)
	{
	}

	for (j = 0; j <= len ; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
